#include "Character.h"

Character::Character(Vector2 pos, float s): 
	position(pos), size(s)
{

}
Character:: ~Character()
{

}
void Character::Update()
{
	velocity.y += gravity;
	if (IsKeyDown(KEY_A))
		velocity.x = -moveSpeed;
	if (IsKeyReleased(KEY_A))
		velocity.x = 0;
	velocity.y += gravity;
	if (IsKeyDown(KEY_D))
		velocity.x = moveSpeed;
	if (IsKeyReleased(KEY_D))
		velocity.x = 0;
	if (IsKeyPressed(KEY_SPACE))
		velocity.y = jumpForce;
	
	position.y += velocity.y;
	position.x += velocity.x;
}
void Character::Draw()
{
	DrawRectangle(position.x, position.y, size, size, SKYBLUE);
}
void Character::Collision(Tile& T)
{
	Rectangle player = { position.x, position.y, size, size };
	switch (T.GetType())
	{
	case TileType::Brick:
		if (T.GetIsActive())
		{
			if (CheckCollisionRecs(player, T.GetBoxCollider()))
			{
				position.y = T.GetPosition().y - 50;
				velocity.y = 0;
				isGrounded = true;
			}
		}
		break;
	case TileType::Wall:
		break;
	case TileType::Stairs:
		break;
	}
}