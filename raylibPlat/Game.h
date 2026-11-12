#pragma once
#include <raylib.h>
#include "Brick.h"
#include <vector>
#include <iostream>
#include "Character.h"
class Game
{
private:
	bool playing = true;
	const int screeenWidth = 800;
	const int screenHeight = 600;
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

