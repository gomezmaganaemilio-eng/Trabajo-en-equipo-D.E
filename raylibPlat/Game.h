#pragma once
#include <raylib.h>
class Game
{
private:
	bool playing = false;
	const int screeenWidth = 800;
	const int screenHeight = 600;
	Vector2 ballPos;
public:
	Game();
	~Game();


	void InitGame();
	void Update();
	
	bool isPlaying() { return WindowShouldClose(); }
	void Draw();
};

