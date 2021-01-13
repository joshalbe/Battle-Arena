#pragma once
#include "Actor.h"

class Enemy : Actor {
private:
	int m_health = 10;
	int m_damage = 5;

public:
	void attack(int damage);
	void takeDamage(int enemyDamage);
	void enemyMovement(float deltatime);
};