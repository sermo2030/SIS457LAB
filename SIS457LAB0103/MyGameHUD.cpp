// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameHUD.h"

void AMyGameHUD::DrawHUD() {

	Super::DrawHUD();

	DrawLine(100, 100, 500, 500, FLinearColor::Black);
	DrawText("Hola mi nombre es Sergio Huarachi Navarro", FLinearColor::Blue, 500, 500);
}

