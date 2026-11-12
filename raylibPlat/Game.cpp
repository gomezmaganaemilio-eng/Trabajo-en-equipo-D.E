#include "Game.h"

Game::Game()
{
	
	C = new Character({ 10, 1000 }, 100);
	InitWindow(screeenWidth, screenHeight, "Plat");
	SetTargetFPS(30);
}

Game::~Game()
{
}

void Game::InitGame()
{
	for (int o = 0; o < 60; o++)// los for de aquí funcionan porque te indican en donde los vas a dibujar en el mapa, su longitud y alto
	{

		map.push_back(new Wall(-100, o*50, 100));
	}
	for (int i = 0; i < 50; i++)
	{
		map.push_back(new Brick(i * 100, 1700, 100));
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
	DrawText("Ball Moving", 10, 10, 25, {10,200,24,255}); // x,y,tamaño de la fuente, color
	C->Draw();
	for (auto i : map) // Aquí solo necesitamos uno porque el for auto i de map ya es de todo.
	{
		C->Collision(*i);
		i->Draw();
	}
	EndDrawing();
}
