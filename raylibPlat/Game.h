#pragma once
#include <raylib.h>
#include "Brick.h"
#include <vector>
#include <iostream>
#include "Character.h"
#include "Wall.h"
class Game
{
private:
	bool playing = true;
	const int screeenWidth = 2200;
	const int screenHeight = 1800;
	std::vector<Tile*> map;
	Vector2 ballPos;

	Character* C;
public:
	Game();
	~Game();


	void InitGame();
	void Update();
	
	bool isPlaying() { return WindowShouldClose(); }
	void Draw();


};

