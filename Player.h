#pragma once
#include "Novice.h"
class Player
{
private:
	int playerPosX_;
	int playerPosY_;
	int playerRadius_;
	int playerSpeedX_;
	int playerSpeedY_;
	int playerMoveSpeed_;
	int playerHP_;
	bool playerIsAlive_;

	int delayFrameBullet_;
	int playerDelayFrameBullet_;
public:
	/// <summary>
	/// ‰Šú‰»ŠÖ”
	/// </summary>
	void Initialize();

	/// <summary>
	/// XVŠÖ”
	/// </summary>
	void Update(char* keys, char* preKeys);

	/// <summary>
	/// ˆÚ“®ŠÖ”
	/// </summary>
	void Move(char* keys, char* preKeys);

	/// <summary>
	/// •`‰æŠÖ”
	/// </summary>
	void Draw();
};

