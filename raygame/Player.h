#pragma once
#include "Item.h"
#include "Character.h"

class Player : public Character {
public:
	Player() {}
	Player(int hp, int damage);

	void attack(Character* target) override;
	void takeDamage(int attackDamage) override;
	void playerMovement(float deltatime);

private:
	//Item[3] m_inventory = [];
};