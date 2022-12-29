#include <Novice.h>
#include "Player.h"

const char kWindowTitle[] = "GC1A_12_サワダカズキ_タイトル";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	Player player;

	player.Initialize();

	PlayerBullet playerbullet;

	playerbullet.Initialize();

	int playerBulletDistance;

	int score = 0;
	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///

		player.Move(keys, preKeys);

		player.Update(keys, preKeys);

	//	playerBulletDistance = (playerbullet.GetPlayerBulletPosX() - enemy.) * (playerbullet.GetPlayerBulletPosX() - enemy.) + (playerbullet.GetPlayerBulletPosY() - enemy.) * (playerbullet.GetPlayerBulletPosY() - enemy.);

	////	if (enemy.isAlive && playerbullet.GetPlayerIsBulletShot() == true)
	//	{
	//	//	if (playerbullet.GetPlayerBulletRadius() + enemy.radius()) * (playerbullet.GetPlayerBulletRadius() + enemy.radius()) >= playerBulletDistance)
	//		{

	//		playerbullet.BulletOnColision();
	//		score += 100;
	//		}
	//	}
		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
