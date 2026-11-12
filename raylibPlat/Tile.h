#pragma once
#include "raylib.h"
enum class TileType {
	Brick, // 0
	Wall, //1
	Stairs //2
};
class Tile
{
private:
	float timer;
protected:
	TileType type;
	Vector2 position;
	float size;
	bool Isactive = true;
	Rectangle boxCollider;
	void SetType(TileType t) { type = t; }
public:
	Tile(float x, float y, float size);
	~Tile();

	void Update(float DT);
	virtual void Draw() const = 0;

	void SetIsActive(bool active) { Isactive = active; }
	bool GetIsActive() { return Isactive; }

	TileType GetType() { return type; }

	Vector2 GetPosition() { return position; }
	Rectangle GetBoxCollider() { return boxCollider; }
};

