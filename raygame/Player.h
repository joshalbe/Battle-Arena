#pragma once
#include "Actor.h"

class Player : Actor {
private:
	int m_health = 10;
	int m_damage = 5;
	//Item[3] m_inventory;

public:
	void attack(int damage);
	void takeDamage(int enemyDamage);
	void playerMovement(float deltatime);
};