// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Components/BoxComponent.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//�浹ü�� �ܰ��� �����Ѵ�. �������� : �浹ü�� Root�� ����� �ܰ��� Root�� ���δ�.
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	SetRootComponent(Box);

	Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	Cube-> SetupAttachment(RootComponent);

	//�ܰ��� ũ��� �浹ü�� ũ�⸦ �����Ѵ�
	Cube->SetRelativeScale3D(FVector(1, 0.25f, 0.25f));
	Box->SetBoxExtent(FVector(50, 16, 16));
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//�Ѿ�ġ �� �������� ��� �̵��ϰ� �����Ѵ�
	FVector P0 = GetActorLocation();
	FVector Velocity = GetActorForwardVector() * Speed;
	SetActorLocation(P0 + Velocity * DeltaTime);
}

