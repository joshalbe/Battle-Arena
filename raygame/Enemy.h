#pragma once
#include "Actor.h"

class Enemy : Actor {

public:
	Enemy() {}
	Enemy(int hp, int damage);

	//Get-Sets for stats
	int getHealth() { return m_health; }
	void setHealth(int value) { m_health = value; }
	int getDamage() { return m_damage; }
	void setDamage(int value) { m_damage = value; }

	void attack(int damage);
	void takeDamage(int enemyDamage);
	void enemyMovement(float deltatime);

private:
	//Primary stat variables
	int m_health = 10;
	int m_damage = 5;

};