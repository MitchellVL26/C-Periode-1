#include "Player.h"

Player::Player(std::string aName, int aHP, int aStrength, int aDefend)
{
    SetName(aName);
    SetHP(aHP);
    SetStrength(aStrength);
    SetDefend(aDefend);
}

Player::~Player()
{
}

void Player::SetName(std::string aName)
{
    name = aName;
}

std::string Player::GetName()
{
    return name;
}

void Player::SetHP(int aHP)
{
    HP = aHP;
}

int Player::GetHP()
{
    return HP;
}

void Player::SetStrength(int aStrength)
{
    Strength = aStrength;
}

int Player::GetStrength()
{
    return Strength;
}

void Player::SetDefend(int aDefend)
{
    Verdedig = aDefend;
}

int Player::GetDefend()
{
    return Verdedig;
}
