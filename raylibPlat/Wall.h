#pragma once
#include "Tile.h"
class Wall :
    public Tile
{
public: 
    Wall(float x, float y, float size);
    ~Wall();
	void Draw() const override;
};

