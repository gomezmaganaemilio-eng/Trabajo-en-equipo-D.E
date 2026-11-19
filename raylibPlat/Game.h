#pragma once
#include <raylib.h>
#include "Brick.h"
#include <vector>
#include <iostream>
#include "Character.h"
#include "Wall.h"
#include "Gold.h"
#include "stairs.h"
#include "tube.h"

class Game
{
private:
	bool playing = true;
	const int screeenWidth = 1400;
	const int screenHeight = 850;
	std::vector<Tile*> map;
	std::vector<Gold*> coins;
	Vector2 ballPos;
	bool runGame = false;
	Character* C;
public:
	Game();
	~Game();


	void InitGame();
	void Update();
	
	bool isPlaying() { return WindowShouldClose(); }
	void Draw();


};

