#pragma once
#include "Novice.h"
#include "PlayerBullet.h"
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
	int playerHitTime_;
	bool isPlayerInvincibleHit_;
	bool isPlayerPoint_;
	int playerDefeatCount_;
	int blueHealth_[3];

	PlayerBullet playerbullet_;
public:
	/// <summary>
	/// 初期化関数
	/// </summary>
	void Initialize();

	/// <summary>
	/// 更新関数
	/// </summary>
	void Update(char* keys, char* preKeys);

	/// <summary>
	/// 移動関数
	/// </summary>
	void Move(char* keys, char* preKeys);

	/// <summary>
	/// 描画関数
	/// </summary>
	void Draw();
};

