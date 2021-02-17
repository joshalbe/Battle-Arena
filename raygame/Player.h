#pragma once
#include "Item.h"
#include "Actor.h"
#include "Character.h"
#include "Sprite.h"
#include <Vector2.h>
#include <Matrix3.h>

class Player : public Character {
public:
	Player() {}
	Player(int hp, int damage);
	Player(float x, float y, float collisionRadius, Sprite* sprite, float maxSpeed);
	void attack(Character* target) override;
	void takeDamage(int attackDamage) override;
	//void playerMovement(float deltatime);

	virtual void movement();

	bool sendGameOver;

	void update(float deltatime) override;
	/*virtual void draw();
	virtual void end();*/
private:
	//Item[3] m_inventory = [];
};