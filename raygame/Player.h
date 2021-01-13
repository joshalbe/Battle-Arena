#pragma once
#include "Actor.h"
#include "Item.h"

class Player : Actor {
public:
	Player() {}
	Player(int hp, int damage);

	int getHealth() { return m_health; }
	void setHealth(int value) { m_health = value; }
	int getDamage() { return m_damage; }
	void setDamage(int value) { m_damage = value; }

	void attack(int damage);
	void takeDamage(int enemyDamage);
	void playerMovement(float deltatime);

private:
	int m_health = 10;
	int m_damage = 5;
	//Item[3] m_inventory = [];
};