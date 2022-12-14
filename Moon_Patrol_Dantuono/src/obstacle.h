#pragma once
#include "timer.h"

#include "raylib.h"

class Obstacle {
private:
	float x;
	float y;

	float velocity;
	float width;
	float height;

	int checkcolision = 0;
	bool active;
	Rectangle colision;

	Timer moveUp;
	Timer moveDown;

public:
	Obstacle(float x, float y, float velocity, float width, float height);
	void DrawObstacle();
	void MoveObstacle();
	void MoveFlyObstacle();
	bool CheckColisionShoot(Vector2 center, float radius);
	void CheckJumpPlayer(float X, float Y);
	float GetX();
	float GetY();
	float GetWidht();
	float GetHeight();
	void RestartPosition();
	void RestartFlyPosition();
	void RestartObstacle();
};
