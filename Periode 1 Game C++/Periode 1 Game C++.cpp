// Periode 1 Game C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Inventory.h"
#include "Item.h"
#include <Vector>
#include "Player.h"
#include "Enemy.h"
#include "TakeDamage.h"
#include "EnemyAction.h"
#include "GameManager.h"
#include "BattleRound1.h"

int main()
{


    //Hier begint mijn programma!
  
    // Functie voor vijandactie (aanval of verdediging)

    GameManager gameManager;
    Player Play("Speler", 200, 50, 30);
    Enemy En("Vijand", 150, 80, 30);
    EnemyAction enemyAction;
    BattleRound1 battle;
    battle.BattleRound(Play, En, enemyAction, gameManager);
   
    return 0;
 
}


