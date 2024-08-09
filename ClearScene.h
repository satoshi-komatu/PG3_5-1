#pragma once
#include "IScene.h"

class ClearScene :public IScene
{
public:
	void Init() override;
	void Update(char* keys, char* preKeys);
	void Draw() override;
};
