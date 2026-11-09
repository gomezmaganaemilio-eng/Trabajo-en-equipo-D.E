#include "Game.h"

Game::Game()
{
	InitWindow(screeenWidth, screenHeight, "Plat");
	SetTargetFPS(30);
}

Game::~Game()
{
}

void Game::InitGame()
{
	
     ballPos = { (float)screeenWidth / 2, (float)screenHeight / 2 };
	/*DrawText("Start", (float)screeenWidth/2, (float)screenHeight/2, 50, BLACK);*/
}

void Game::Update()
{
	if (IsKeyDown(KEY_RIGHT))ballPos.x += 2;
	if (IsKeyDown(KEY_LEFT))ballPos.x -= 2;
	if (IsKeyDown(KEY_UP))ballPos.y -= 2;
	if (IsKeyDown(KEY_DOWN))ballPos.y += 2;

	
}

void Game::Draw()
{
	BeginDrawing();
	ClearBackground(VIOLET);
	DrawText("Ball Moving", 10, 10, 25, BLACK); // x,y,tamaño de la fuente, color
	DrawCircleV(ballPos, 50, RED);
	EndDrawing();
}
