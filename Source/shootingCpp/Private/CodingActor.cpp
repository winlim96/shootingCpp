// Fill out your copyright notice in the Description page of Project Settings.


#include "CodingActor.h"

// Sets default values
ACodingActor::ACodingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACodingActor::BeginPlay()
{
	Super::BeginPlay();
	
	// UE_LOG(LogTemp, Warning, TEXT("Hello World!"));

	// number
	//UE_LOG(LogTemp, Warning, TEXT("%d"), number);

	//float
	//UE_LOG(LogTemp, Warning, TEXT("%.1f"), fNumber);

	//bool
	//int size = sizeof(bool);
	//UE_LOG(LogTemp, Warning, TEXT("%d"), size);
	//UE_LOG(LogTemp, Warning, TEXT("bool is true : %d"), true);
	//UE_LOG(LogTemp, Warning, TEXT("bool is false : %d"), false);

	//문자열
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *name);

	//조건문
	//만약 Name이 Lisa라면 LVMH 별장에서 쉬고싶다.
	//그렇지 않고 Name이 Jisu라면 프랑스로 여행가고싶다.
	//이도저도 아니라면 집에서 지구마블이나 보고싶다.
	/*if (name.Equals(TEXT("Lisa")))
	{
		UE_LOG(LogTemp, Warning, TEXT("LVMH 별장에서 쉬고싶다."), *name);
	}
	else if (name.Equals(TEXT("Jisu")))
	{
		UE_LOG(LogTemp, Warning, TEXT("프랑스로 여행가고싶다."), *name);		
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("집에서 지구마블이나 하고싶다."), *name);
	}*/

	//반복문
	//0부터 10까지 다 더해서 출력해보세요.
	/*int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		sum += i;
	}
	UE_LOG(LogTemp, Warning, TEXT("%d"), sum);*/

	//50이상 그리고 60이하만 출력 또는 10이하거나90이상만 출력
	/*for (int i = 0; i <= 100; i++)
	{
		if (i >= 50 && i <= 60 || (i <= 10 || i >= 90))
		{
			UE_LOG(LogTemp, Warning, TEXT("%d"), i);
		}
	}*/
	
}

// Called every frame
void ACodingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

//UHT : Unreal Engine Header Tool
// UBT : Unreal Engine Build Tool
//언리얼 표준코딩 /* https://dev.epicgames.com/documentation/ko-kr/unreal-engine/epic-cplusplus-coding-standard-for-unreal-engine */
// 인터페이스 : I
//위젯 : S 
//열거형 : E
// 그외 : F

//클래스 구성
/*속성: 변수 = property
* 기능 : 함수 = function
* 
* %d : 정수형 (int32)
* %f:실수형(float)
* %s: 문자열 포인터(TChar*)
*/
