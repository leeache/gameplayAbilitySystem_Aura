// Copyright Gura Universe


#include "Aura/Public/Character/AuraCharacterBase.h"

// Sets default values
AAuraCharacterBase::AAuraCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	// создал под объект с типом меш компонента и обозвал веапон
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");

	// установил атачмент в с названием соккета, получив сначала меш родителя, получается того чара которого я ввызвал
	Weapon->SetupAttachment(GetMesh(),FName("WeaponHandSocket"));
	// тут просто коллизию включил с вариантом noCollision
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	Belt = CreateDefaultSubobject<USkeletalMeshComponent>("Belt");
	Belt->SetupAttachment(GetMesh(),FName("BeltSocket"));
	Belt->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}
