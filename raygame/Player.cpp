#include "Player.h"
#include "Raylib.h"

Player::Player(int hp, int damage) 
{
	/*m_health = hp;
	m_damage = damage;*/

    m_globalTransform = new MathLibrary::Matrix3();
    m_localTransform = new MathLibrary::Matrix3();
    m_rotation = new MathLibrary::Matrix3();
    m_translation = new MathLibrary::Matrix3();
    m_scale = new MathLibrary::Matrix3();

    setLocalPosition(MathLibrary::Vector2(10, 10));
    m_velocity = MathLibrary::Vector2();
    
    m_childCount = 0;
    
}

Player::Player(float x, float y, float collisionRadius, Sprite* sprite, float maxSpeed)
{
    //Transferred the actor contructor variables due to code complications, hardcoded a solution
    m_globalTransform = new MathLibrary::Matrix3();
    m_localTransform = new MathLibrary::Matrix3();
    m_rotation = new MathLibrary::Matrix3();
    m_translation = new MathLibrary::Matrix3();
    m_scale = new MathLibrary::Matrix3();

    setLocalPosition(MathLibrary::Vector2(x, y));
    m_velocity = MathLibrary::Vector2();
    m_collisionRadius = collisionRadius;
    m_childCount = 0;
    m_maxSpeed = maxSpeed;

    m_sprite = sprite;
	
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

//void Player::playerMovement(float deltatime)
//{
//
//}

void Player::movement()
{
    //move up with input "w"
    if (IsKeyDown(87))
    {
        m_velocity.y = -10;
    }
    //move up with input "s"
    else if (IsKeyDown(83))
    {
        m_velocity.y = 10;
    }
    //move up with input "a"
    else if (IsKeyDown(65))
    {
        m_velocity.x = -10;
    }
    //move up with input "d"
    else if (IsKeyDown(68))
    {
        m_velocity.x = 10;
    }
    //self destruct button: space bar ends the game
    else if (IsKeyDown(32)) 
    {
        sendGameOver = true;
    }
    //otherwise, don't move
    else
    {
        m_velocity.x = 0;
        m_velocity.y = 0;
    }
}

//every time the game updates
void Player::update(float deltatime)
{
    //check movement
    movement();
    //update the actor on deltatime
    Character::Actor::update(deltatime);

}


//void Player::update()
//{
//}
//
//void Player::draw()
//{
//	Actor::draw();
//}
//
//void Player::end()
//{
//}
