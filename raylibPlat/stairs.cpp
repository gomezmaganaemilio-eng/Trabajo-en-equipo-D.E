#include "stairs.h"

stairs::stairs(float x, float y, float size):
	Tile(x,y,size)

{
	SetType(TileType::Stairs);
}

stairs::~stairs()
{
}

void stairs::Draw() const
{
	DrawRectangle(position.x, position.y, size, size, GRAY);
}
