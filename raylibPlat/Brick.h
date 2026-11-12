#pragma once
#include "Tile.h"
class Brick :
    public Tile
{
public:
    Brick(float x, float y, float size);
	~Brick();
	void Draw() const override;//override, va a sobreescribir la función del padre.
};

