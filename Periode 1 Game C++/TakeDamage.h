#pragma once
#include "Enemy.h"
#include "Player.h"
class TakeDamage
{
public:
	TakeDamage();
	~TakeDamage();

	void Damage(int aDamage);
	int GetDamage();

private:
	int damage;
};

