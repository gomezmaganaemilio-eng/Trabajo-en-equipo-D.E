#pragma once
#include "Tile.h"
class stairs :
    public Tile
{
public:
    stairs(float x, float y, float size);
    ~stairs();
    void Draw() const override;
};

