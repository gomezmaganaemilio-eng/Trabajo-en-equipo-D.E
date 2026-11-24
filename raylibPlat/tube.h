#pragma once
#include "Tile.h"
class tube :
    public Tile
{
public:
    tube(float x, float y, float size);
    ~tube();
    void Draw() const override;
};

