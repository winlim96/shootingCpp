// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "CodingActor.generated.h" //항상 맨 아래 위치

UCLASS()
class SHOOTINGCPP_API ACodingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACodingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVariable)
	// Edit / Visible + Anywhere / DefaultsOnly
	// Edit = Read and Write / Visible = Read Only
	// DefaultsOnly = Blueprint Class
	// InstanceOnly = Blueprint Instance

	int number = 10;                //4byte 정수형
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVariable)

	float fNumber = 10.0f;          // 실수형
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVariable)

	bool bReady = false;            //논리형
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVariable)

	FString name = TEXT("");   // 문자열
	
};



/*https://docs.unrealengine.com/4.27/ko/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/StringHandling/ */