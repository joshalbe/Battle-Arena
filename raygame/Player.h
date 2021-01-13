#pragma once
#include "Actor.h"
#include "Item.h"
#include "Enemy.h"

class Player : Actor {
public:
	Player() {}
	Player(int hp, int damage);

	int getHealth() { return m_health; }
	void setHealth(int value) { m_health = value; }
	int getDamage() { return m_damage; }
	void setDamage(int value) { m_damage = value; }

	void attack(Enemy* enemy);
	void takeDamage(Enemy* enemy);
	void playerMovement(float deltatime);

private:
	int m_health = 10;
	int m_damage = 5;
	//Item[3] m_inventory = [];
};