#pragma once
#include "Character.h"

class Enemy : public Character {

public:
	Enemy() {}
	Enemy(int hp, int damage);

	void attack(Character* target) override;
	void takeDamage(int attackDamage) override;
	void enemyMovement(float deltatime);



};