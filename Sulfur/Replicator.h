#pragma once

class Replicator
{
private:
	Beacon* BeaconHost;

	bool DormancyCheck(AActor* Actor)
	{
		auto ClassName = Actor->Class->GetFullName();

		if (ClassName == "Class FortniteGame.BuildingSMActor")
			return true;

		return false;
	}

public:

	inline static UChannel* (*CreateChannel)(UNetConnection*, int, bool, int32_t);
	inline static __int64 (*ReplicateActorInternal)(UActorChannel*);
	inline static __int64 (*SetChannelActor)(UActorChannel*, AActor*);

	Replicator(Beacon* InBeaconHost)
	{
		BeaconHost = InBeaconHost;
		Replicator::CreateChannel = decltype(Replicator::CreateChannel)(Util::FindPattern("40 56 57 41 54 41 55 41 57 48 83 EC 60 48 8B 01 41 8B F9 45 0F B6 E0 4C 63 FA 48 8B F1 FF 90 ? ? ? ? 45 33 ED 83 FF FF 0F 85 ? ? ? ? 4C 63 8E ? ? ? ? 41 83 FF 01"));
		Replicator::SetChannelActor = decltype(Replicator::SetChannelActor)(Util::FindPattern("48 8B 05 ? ? ? ? 4C 8D 85 ? ? ? ? 44 39 64 24 ? 48 8B CE 48 89 85 ? ? ? ? 41 B9 ? ? ? ? 48 0F 45 4C 24 ? 48 8D 05 ? ? ? ? 4C 89 74 24 ? 33 D2 48 89 4C 24 ? 33 C9 48 89 44 24 ?"));
		Replicator::ReplicateActorInternal = decltype(Replicator::ReplicateActorInternal)(Util::FindPattern("48 8B 05 ? ? ? ? 4C 8D 85 ? ? ? ? 48 89 4C 24 ? 41 B9 ? ? ? ? 48 89 85 ? ? ? ? 33 D2 48 8D 05 ? ? ? ? 33 C9 48 89 44 24 ? E8 ? ? ? ? 48 8B 4C 24 ? 48 85 C9 74 05 E8 ? ? ? ?"));
	}

	UActorChannel* FindChannel(AActor* Actor, UNetConnection* Connection)
	{
		for (int i = 0; i < Connection->OpenChannels.Num(); i++)
		{
			auto Channel = Connection->OpenChannels[i];

			if (Channel && Channel->Class)
			{
				if (Channel->Class->GetFullName() == ACTOR_CHANNEL_CLASS)
				{
					if (((UActorChannel*)Channel)->Actor == Actor)
						return ((UActorChannel*)Channel);
				}
			}
		}

		return nullptr;
	}

	void ReplicateActor(AActor* Actor, UNetConnection* Connection)
	{
		auto Channel = FindChannel(Actor, Connection);
		if (Channel == nullptr)
		{
			Channel = (UActorChannel*)CreateChannel(Connection, 2, true, 1);
			SetChannelActor(Channel, Actor);
		}

		ReplicateActorInternal(Channel);
	}

	int ServerReplicateActors()
	{
		if (BeaconHost->GetNetDriver()->ClientConnections.Num() == 0)
			return 0;

		int NumActorsReplicated = 0;

		for (int i = 0; i < BeaconHost->GetNetDriver()->ClientConnections.Num(); i++)
		{
			auto Connection = BeaconHost->GetNetDriver()->ClientConnections[i];

			for (int j = 0; j < Globals::World->PersistentLevel->ActorCluster->Actors.Num(); j++)
			{
				auto Actor = Globals::World->PersistentLevel->ActorCluster->Actors[j];

				NumActorsReplicated += 1;

				if (Actor->bReplicates && (Actor->NetDormancy != ENetDormancy::DORM_Initial) && !Actor->bNetStartup)
					ReplicateActor(Actor, Connection);
			}
		}

		return NumActorsReplicated;
	}
};

namespace NetDriver
{
	UNetDriver* NetDriver;
	float(*GetMaxTickRate)(UEngine*, float, bool);

	static int32_t ServerReplicateActors_PrepConnections(int32_t DeltaSeconds)
	{
		int32_t NumClientsToTick = NetDriver->ClientConnections.Num();

		bool bFoundReadyConnection = false;

		for (int i = 0; i < NumClientsToTick; i++)
		{
			UNetConnection* Connection = NetDriver->ClientConnections[i];

			if (Connection == NULL)
				continue;

			AActor* OwningActor = Connection->OwningActor;

			if (OwningActor != NULL && (Connection->Driver->Time - Connection->LastReceiveTime < 1.5f))
			{
				bFoundReadyConnection = true;

				AActor* DesiredViewTarget = OwningActor;
				if (Connection->PlayerController)
				{
					if (AActor* ViewTarget = Connection->PlayerController->GetViewTarget())
					{
						if (ViewTarget != NULL)
						{
							// It is safe to use the player controller's view target.
							DesiredViewTarget = ViewTarget;
						}
						else
						{
						}
					}
				}
				Connection->ViewTarget = DesiredViewTarget;

				for (int ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
				{
					UNetConnection* Child = Connection->Children[ChildIdx];
					APlayerController* ChildPlayerController = Child->PlayerController;
					if (ChildPlayerController != NULL)
					{
						Child->ViewTarget = ChildPlayerController->GetViewTarget();
					}
					else
					{
						Child->ViewTarget = NULL;
					}
				}
			}
			else
			{
				Connection->ViewTarget = NULL;
				for (int ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
				{
					Connection->Children[ChildIdx]->ViewTarget = NULL;
				}
			}
		}

		return bFoundReadyConnection ? NumClientsToTick : 0;
	}

	static int32_t ServerReplicateActors(float DeltaSeconds)
	{
		if (NetDriver->ClientConnections.Num() == 0)
		{
			return 0;
		}

		int32_t Updated = 0;

		const int32_t NumClientsToTick = ServerReplicateActors_PrepConnections(DeltaSeconds);

		if (NumClientsToTick == 0)
		{
			// No connections are ready this frame
			return 0;
		}

		AWorldSettings* WorldSettings = Globals::World->PersistentLevel->WorldSettings;

		bool bCPUSaturated = false;
		float ServerTickTime = GetMaxTickRate(Globals::FortEngine, DeltaSeconds, true);
		if (ServerTickTime == 0.f)
		{
			ServerTickTime = DeltaSeconds;
		}
		else
		{
			ServerTickTime = 1.f / ServerTickTime;
			bCPUSaturated = DeltaSeconds > 1.2f * ServerTickTime;
		}

		for (int32_t i = 0; i < NetDriver->ClientConnections.Num(); i++)
		{
			UNetConnection* Connection = NetDriver->ClientConnections[i];

			if (Connection == NULL)
				continue;


		}

		TArray<FNetworkObjectInfo*> ConsiderList;
		ConsiderList.Reserve(NetDriver->NetworkObjects.Object->ActiveNetworkObjects)
	}
}