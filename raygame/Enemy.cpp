#include "Enemy.h"

Enemy::Enemy(int hp, int damage) 
{
	m_health = hp;
	m_damage = damage;
}

void Enemy::attack(Character* target)
{
	int enemyDamage = m_damage;
	target->setHealth(enemyDamage);
}

void Enemy::takeDamage(int attackDamage)
{
	int playerDamage = attackDamage;
	this->setHealth(m_health - playerDamage);
}

void Enemy::enemyMovement(float deltatime)
{
	test;
}
