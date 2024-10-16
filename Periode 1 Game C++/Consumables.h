#pragma once
#include "Item.h"
#include <string>
class Consumables :
    public Item
{
public:
    Consumables(std::string aName);
    ~Consumables();


private:
    int health;
    int attackPower;
    int magic;
    int mana;
};



