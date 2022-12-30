#pragma once
class Enemy
{
private:
	int enemyPosX_;
	int enemyPosY_;
	int enemySpeedX_;
	int enemySpeedY_;
	int enemyRadius_;
	int enemyHP_;
	int enemyFramecount_;
	bool enemyIsAlive_;

	bool enemyExplosion_;
	float enemyRespawnCount_;

	int delayFrameBulletEnemy_;
	int enemyDelayFrameBullet_;
	int enemyPoint_;
	int drawExplosion1_[6];
};

