#pragma once
#include <raylib.h>
#include "Tile.h"
#include <vector>
#include <iostream>
#include "Character.h"
class Game
{
private:
	std::vector<Tile*> map;
	bool playing = false;
	const int screeenWidth = 800;
	const int screenHeight = 600;
	Vector2 ballPos;
	Tile* T;
	Character* C;
public:
	Game();
	~Game();


	void InitGame();
	void Update();
	
	bool isPlaying() { return WindowShouldClose(); }
	void Draw();


};

