
#include "Player.h"

Player::Player(int hp, int damage) 
{
	m_health = hp;
	m_damage = damage;
}

void Player::attack(Enemy* enemy)
{
	enemy->setHealth(m_damage);
}

void Player::takeDamage(Enemy* enemy)
{
	int enemyDamage = enemy->getDamage();
	m_health -= enemyDamage;
}

void Player::playerMovement(float deltatime)
{
}
