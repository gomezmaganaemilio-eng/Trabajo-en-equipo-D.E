#include "Game.h"

Game::Game()
{
	
	C = new Character({ 10, 50 }, 50);
	InitWindow(screeenWidth, screenHeight, "Plat");
	SetTargetFPS(30);
}

Game::~Game()
{
}

void Game::InitGame()
{
	for (int i = 0; i < 25; i++)
	{
		map.push_back(new Brick(i * 50, 550, 50));
	}
     ballPos = { (float)screeenWidth / 2, (float)screenHeight / 2 };
	/*DrawText("Start", (float)screeenWidth/2, (float)screenHeight/2, 50, BLACK);*/
}

void Game::Update()
{
	
	C->Update();

	
}

void Game::Draw()
{
	BeginDrawing();
	ClearBackground(VIOLET);
	DrawText("Ball Moving", 10, 10, 25, BLACK); // x,y,tamaño de la fuente, color
	C->Draw();
	for (auto i : map)
	{
		C->Collision(*i);
		i->Draw();
	}
	EndDrawing();
}
