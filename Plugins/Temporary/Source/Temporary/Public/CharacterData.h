#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterData.generated.h"

// 캐릭터 관련 데이터를 저장하기 위한 UObject 기반 데이터 클래스입니다.
UCLASS(BlueprintType)
class TEMPORARY_API UCharacterData : public UObject
{
    GENERATED_BODY()

public:
    // 화면 출력 테스트에 사용할 캐릭터 기본 데이터입니다.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Data")
    FString CharacterName = TEXT("Player");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Data")
    int32 Health = 100;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Data")
    float MoveSpeed = 600.0f;
};