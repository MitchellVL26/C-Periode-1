#include "TakeDamage.h"
#include "Enemy.h"
#include "Player.h"

void TakeDamage::Damage(int aDamage)
{
	damage = aDamage;
}

int TakeDamage::GetDamage()
{
	
	return damage;
}
