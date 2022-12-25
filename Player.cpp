#include "Player.h"

void Player::Initialize()
{
	playerPosX_ = 100;
	playerPosY_ = 360;
	playerRadius_ = 50;
	playerSpeedX_ = 6;
	playerSpeedY_ = 6;
	playerMoveSpeed_ = 6;
	playerHP_ = 5;
	playerIsAlive_ = true;
	delayFrameBullet_ = 10;
	playerDelayFrameBullet_ = delayFrameBullet_;
}

void Player::Update(char* keys, char* preKeys)
{

}

void Player::Move(char* keys, char* preKeys)
{
	playerSpeedX_ = playerMoveSpeed_;
	playerSpeedY_ = playerMoveSpeed_;

	if (keys[DIK_W] || keys[DIK_UP])
	{
		if (playerPosY_ - playerRadius_ < 0)
		{
			playerPosY_ = 0;
		}
		playerPosY_ -= playerSpeedY_;
	}

	if (keys[DIK_A] || keys[DIK_LEFT])
	{
		if (playerPosX_ - playerRadius_ < 0)
		{
			playerPosX_ = 0;
		}
		playerPosX_ -= playerSpeedX_;
	}
	
	if (keys[DIK_S] || keys[DIK_DOWN])
	{
		if (playerPosY_ + playerRadius_ > 720)
		{
			playerPosY_ = 720;
		}
		playerPosY_ += playerSpeedY_;
	}
	
	if (keys[DIK_D] || keys[DIK_RIGHT])
	{
		if (playerPosX_ + playerRadius_ > 1280)
		{
			playerPosX_ = 1280;
		}
		playerPosX_ += playerSpeedX_;
	}
}

void Player::Draw()
{
	Novice::DrawBox(playerPosX_, playerPosY_, playerRadius_, playerRadius_, 0.0f, WHITE, kFillModeSolid);
}
