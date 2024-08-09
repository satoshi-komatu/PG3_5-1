#pragma once
#include "IScene.h"

class TitleScene :public IScene 
{
public:
	void Init() override;
	void Update(char* keys, char* preKeys);
	void Draw() override;
};