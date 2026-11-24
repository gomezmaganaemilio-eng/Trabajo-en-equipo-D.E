#include "tube.h"



tube::tube(float x, float y, float size):
	Tile(x,y,size)
{
	SetType(TileType::tube);
}

tube::~tube()
{
}

void tube::Draw() const
{
	DrawRectangle(position.x, position.y, size, size, VIOLET);

}
