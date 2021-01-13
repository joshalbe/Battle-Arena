#include "Enemy.h"

Enemy::Enemy(int hp, int damage) 
{
	m_health = hp;
	m_damage = damage;
}

void Enemy::attack(int damage)
{
	damage;
}

void Enemy::takeDamage(int playerDamage)
{
	m_health - playerDamage;
}

void Enemy::enemyMovement(float deltatime)
{
}
