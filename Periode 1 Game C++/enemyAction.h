#pragma once
#ifndef ENEMYACTION_H
#define ENEMYACTION_H

#include <cstdlib> // Voor rand()
#include <ctime>   // Voor srand()
class EnemyAction
{
public:
	EnemyAction() {
		std::srand(std::time(0));
	}
	int getAction() {
		return rand() % 2 + 1;
	}
	~EnemyAction() {

	}


private:
};
#endif // ENEMYACTION_H

