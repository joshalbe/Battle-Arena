#pragma once
#include "Actor.h"

class Character : Actor 
{
public:

	Character();
	Character(int hp, int damage);

	int getHealth() { return m_health; }
	void setHealth(int value) { m_health = value; }
	int getDamage() { return m_damage; }
	void setDamage(int value) { m_damage = value; }

	virtual void attack(Character* target);
	virtual void takeDamage(int attackDamage);
	

protected:
	int m_health = 1;
	int m_damage = 1;
	int test;
};