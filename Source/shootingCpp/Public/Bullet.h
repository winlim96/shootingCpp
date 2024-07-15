// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"


//class UBoxComponent;

UCLASS()
class SHOOTINGCPP_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* Box; //�� Ŭ������ ������ �Ŀ� �̰� �����ض�

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* Cube;

	//�Ѿ��� �� �������� ��� �̵��ϰ� ����
	UPROPERTY(EditAnywhere)
	float Speed = 800;
};
