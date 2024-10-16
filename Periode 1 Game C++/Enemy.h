#pragma once
#include <string>
class Enemy
{
public:
	Enemy(std::string aName, int aHP, int aStrength, int aDefend);
	~Enemy();

	void SetName(std::string aName);
	std::string GetName();

	void SetHP(int aHP);
	int GetHP();

	void SetStrength(int aStrength);
	int GetStrength();

	void SetDefend(int aDefend);
	int GetDefend();



private:
	std::string name;
	int HP;
	int Strength;
	int Defend;
};


