#include "Enemy.h"




Enemy::Enemy(std::string aName, int aHP, int aStrength, int aDefend)
{
    SetName(aName);
    SetHP(aHP);
    SetStrength(aStrength);
    SetDefend(aDefend);
}

Enemy::~Enemy()
{
}

void Enemy::SetName(std::string aName)
{
    name = aName;
}

std::string Enemy::GetName()
{
    return name;
}

void Enemy::SetHP(int aHP)
{
    HP = aHP;
}

int Enemy::GetHP()
{
    return HP;
}

void Enemy::SetStrength(int aStrength)
{
    Strength = aStrength;
}

int Enemy::GetStrength()
{
    return Strength;
}

void Enemy::SetDefend(int aDefend)
{
    Defend = aDefend;
}

int Enemy::GetDefend()
{
    return Defend;
}


