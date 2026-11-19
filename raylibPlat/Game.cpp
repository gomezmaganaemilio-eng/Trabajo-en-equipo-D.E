#include "Game.h"

Game::Game()
{
	
	C = new Character({ 150, 700 }, 50);
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

		map.push_back(new Wall(-50, o*50, 50));
		map.push_back(new Wall(1400, o*50, 50));
	


	}
	for (int i = 0; i < 28; i++)
	{
		if ( i < 6 || i> 22)
		{
			map.push_back(new Brick(i * 50, 650, 50));
		}
		if (i != 5 && i != 6 && i != 28 && i != 27 && i != 26 && i != 25 && i != 24 && i != 23 && i != 22 && i != 21 && i !=4 && i!= 13)
		{
			map.push_back(new Brick(i *50, 500, 50));

		}
		if (i != 0 && i != 1 && i != 24 && i != 2 && i != 3 && i != 4 && i != 5 && i != 6)
		{
			map.push_back(new Brick(i *50, 200, 50));

		}
		if (i != 0 && i != 1 && i != 24 && i != 23 && i != 22 && i != 25 && i != 26 && i != 27 && i != 28 && i != 2 && i != 3)
			map.push_back(new tube(i * 50, 250, 50));
		if (i != 0 && i != 1 && i != 24 && i != 23 && i != 25 && i != 26 && i != 27 && i != 28 && i != 2 && i != 3 && i != 4 && i != 5 && i != 6)
			map.push_back(new tube(i * 50, 550, 50));
		
		map.push_back(new Brick(i * 50, 800, 50));
		map.push_back(new Wall(i * 50, 850, 50));
		map.push_back(new Wall(i * 50, -50, 50));

		
	}


	map.push_back(new Brick(0, 350, 50));
	map.push_back(new Brick(50, 350, 50));
	map.push_back(new Brick(100, 350, 50));
	map.push_back(new Brick(150, 350, 50));
	map.push_back(new Brick(1050, 350, 50));
	map.push_back(new Brick(1100, 350, 50));
	map.push_back(new Brick(1150, 350, 50));
	map.push_back(new Brick(1200, 350, 50));
	map.push_back(new Brick(1250, 350, 50));
	map.push_back(new Brick(100, 100, 50));
	map.push_back(new Brick(150, 100, 50));
	map.push_back(new Brick(200, 100, 50));
	map.push_back(new Brick(250, 100, 50));
	map.push_back(new Brick(300, 100, 50));
	map.push_back(new Brick(350, 100, 50));
	

	map.push_back(new Wall(300, 650, 50));
	map.push_back(new Wall(350, 650, 50));
	map.push_back(new Wall(650, 500, 50));
	map.push_back(new Wall(200, 500, 50));
	map.push_back(new Wall(200, 450, 50));
	map.push_back(new Wall(200, 400, 50));
	map.push_back(new Wall(200, 350, 50));
	map.push_back(new Wall(1100, 650, 50));
	map.push_back(new Wall(100, 200, 50));
	map.push_back(new Wall(150, 200, 50));
	map.push_back(new Wall(200, 200, 50));
	map.push_back(new Wall(250, 200, 50));
	map.push_back(new Wall(300, 200, 50));
	map.push_back(new Wall(350, 200, 50));
	map.push_back(new Wall(100, 150, 50));
	map.push_back(new Wall(150, 150, 50));
	map.push_back(new Wall(200, 150, 50));
	map.push_back(new Wall(250, 150, 50));
	map.push_back(new Wall(300, 150, 50));
	map.push_back(new Wall(350, 150, 50));

	coins.push_back(new Gold(100, 450, 50));
	coins.push_back(new Gold(1250, 750, 50));
	coins.push_back(new Gold(750, 150, 50));
	coins.push_back(new Gold(250, 50, 50));

	map.push_back(new stairs(400, 650, 50));
	map.push_back(new stairs(400, 700, 50));
	map.push_back(new stairs(400, 750, 50));
	map.push_back(new stairs(300, 600, 50));
	map.push_back(new stairs(300, 550, 50));
	map.push_back(new stairs(300, 500, 50));
	map.push_back(new stairs(650, 450, 50));
	map.push_back(new stairs(650, 400, 50));
	map.push_back(new stairs(650, 350, 50));
	map.push_back(new stairs(650, 300, 50));
	map.push_back(new stairs(1300, 600, 50));
	map.push_back(new stairs(1300, 550, 50));
	map.push_back(new stairs(1300, 500, 50));
	map.push_back(new stairs(1300, 450, 50));
	map.push_back(new stairs(1300, 400, 50));
	map.push_back(new stairs(1300, 350, 50));
	map.push_back(new stairs(1200, 300, 50));
	map.push_back(new stairs(1200, 250, 50));
	map.push_back(new stairs(1200, 200, 50));
	map.push_back(new stairs(50, 250, 50));
	map.push_back(new stairs(50, 300, 50));
	map.push_back(new stairs(50, 200, 50));
	map.push_back(new stairs(50, 150, 50));
	map.push_back(new stairs(50, 100, 50));



	/*DrawText("Start", (float)screeenWidth/2, (float)screenHeight/2, 50, BLACK);*/
}

void Game::Update()
{
	if(runGame == true)
		C->Update();
	
	if (IsKeyPressed(KEY_ENTER))
		runGame = true;
	
}

void Game::Draw()
{
	BeginDrawing();
	//aquí escribes un texto en la mitad de tu pantalla que va a ser tu main menu 
	if (runGame == true)
	{
	ClearBackground(BLACK);
	DrawText("Ball Moving", 10, 10, 25, {10,200,24,255}); // x,y,tamaño de la fuente, color
	C->Draw();
	for (auto i : map) // Aquí solo necesitamos uno porque el for auto i de map ya es de todo.
	{
		C->Collision(*i);
		i->Draw();
	}
	for (auto temp : coins)
	{
		temp->Draw();
		if (C->CollectGold(*temp))
		{
			temp->SetIsActive(false);
			//Add points
		}
	}

	}
	EndDrawing();
}
