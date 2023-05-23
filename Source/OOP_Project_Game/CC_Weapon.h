// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CC_PlayerClass.h"

/**
 * 
 */
class OOP_PROJECT_GAME_API CC_Weapon
{
protected:
	double MaxScatter, ScatterForce, Scatter;
	int Recoil, ReloadTime, ReloadProgress;
	bool isAutomatic, ShotDone;
	TSubclassOf<AActor> Ammo;
	ACC_PlayerClass* WeaponOwner;
	UPaperFlipbookComponent* Sprite,* ShootFlash;
	UCameraComponent* Camera;
	FVector CameraLocation;

public:
	CC_Weapon();
	CC_Weapon(ACC_PlayerClass* thisWeaponOwner, TSubclassOf<AActor> AmmoType);
	virtual void Shoot(FVector MouseLocation);
	void CoolDown();
	void Reload();
	virtual ~CC_Weapon();
};

class CC_Pistol : public CC_Weapon
{
	CC_Pistol(ACC_PlayerClass* thisWeaponOwner, TSubclassOf<AActor> AmmoType);
	~CC_Pistol();
};

class CC_AssaultRifle : public CC_Weapon
{
	CC_AssaultRifle(ACC_PlayerClass* thisWeaponOwner, TSubclassOf<AActor> AmmoType);
	~CC_AssaultRifle();
};