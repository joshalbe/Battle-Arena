
#include "Player.h"

Player::Player(int hp, int damage) 
{
	m_health = hp;
	m_damage = damage;
}

void Player::attack(Character* target)
{
	int playerDamage = m_damage;
	target->takeDamage(playerDamage);
}

void Player::takeDamage(int attackDamage)
{
	int enemyDamage = attackDamage;
	this->setHealth(m_health - enemyDamage);
}

void Player::playerMovement(float deltatime)
{
}
