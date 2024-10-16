#pragma once
#include <string>
class Player
{
public:
	Player();
	Player(std::string aName, int aHP, int aStrength, int aDefend);
	~Player();

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
	int Verdedig;


};

