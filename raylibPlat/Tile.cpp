#include "Tile.h"
Tile::Tile(float x, float y, float size)
{
	this->position.x = x;
	this->position.y = y;
	this->size = size;
	this->Isactive = true;
	boxCollider = { position.x, position.y , size, size };

}
Tile::~Tile()
{

}
void Tile::Update(float DT)
{

}


