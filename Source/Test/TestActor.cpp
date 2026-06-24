// TestActor.cpp


#include "TestActor.h"
#include "Engine/Engine.h"

ATestActor::ATestActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

// TestActor가 게임 시작 시 정상 생성되었는지 화면에 출력해 확인합니다.
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            5.0f,
            FColor::Green,
            TEXT("TestActor BeginPlay - Test Module Loaded")
        );
    }
}

void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

