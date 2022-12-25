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
	/// �������֐�
	/// </summary>
	void Initialize();

	/// <summary>
	/// �X�V�֐�
	/// </summary>
	void Update(char* keys, char* preKeys);

	/// <summary>
	/// �ړ��֐�
	/// </summary>
	void Move(char* keys, char* preKeys);

	/// <summary>
	/// �`��֐�
	/// </summary>
	void Draw();
};

