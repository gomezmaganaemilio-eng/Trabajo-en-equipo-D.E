#pragma once
#include <raylib.h>
class Gold
{
public:
	Gold(float x, float y, float size);
	~Gold();

	void Draw();
	void Update();
	Rectangle GetGoldCollider();

	bool GetIsActive();
	void SetIsActive(bool value);

private:
	Vector2 position;
	float size;
	Rectangle goldCollider;
	bool isActive = true;


};

