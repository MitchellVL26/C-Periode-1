#include "Inventory.h"
#include "Item.h"
#include <Vector>
#include "Player.h"
#include "Enemy.h"
#include "TakeDamage.h"
#include "EnemyAction.h"
#include "GameManager.h"
class BattleRound1
{
public:
	BattleRound1();
    
    void BattleRound(Player& aPlayer, Enemy& anEnemy, EnemyAction& enemyAction, GameManager& gameManager) {
        bool gameOver = false;

        while (!gameOver) {
            while (aPlayer.GetHP() > 0 && anEnemy.GetHP() > 0) {
                int choice;
                std::cout << "Wat ga je doen? 1 = Aanvallen, 2 = Verdedigen: ";
                std::cin >> choice;

                if (choice == 1) {
                    std::cout << aPlayer.GetName() << "Valt Aan" << std::endl;
                    int Schade = aPlayer.GetStrength();


                    if (enemyAction.getAction() == 2) { // Controleer of de vijand verdedigt
                        int verdediging = anEnemy.GetDefend();
                        Schade -= verdediging;  // Verminder de schade door de verdediging
                        if (Schade < 0) Schade = 0; // Schade kan niet negatief zijn
                        std::cout << "De vijand verdedigt en vermindert de schade met " << verdediging << "!" << std::endl;
                    }
                    anEnemy.SetHP(anEnemy.GetHP() - Schade);
                    std::cout << "De vijand heeft nu " << anEnemy.GetHP() << " HP over." << std::endl;

                }

                if (anEnemy.GetHP() <= 0) {
                    std::cout << "Gefeliciteerd! De vijand is verslagen!" << std::endl;
                    break;
                }


                else if (choice == 2) {
                    std::cout << aPlayer.GetName() << " verdedigt!" << std::endl;

                }

                // De vijand kiest zijn actie
                int enemyChoice = enemyAction.getAction();
                if (enemyChoice == 1) {
                    std::cout << "De vijand valt aan!" << std::endl;
                    int Schade = anEnemy.GetStrength();


                    if (choice == 2) {
                        int Verdedigt = aPlayer.GetDefend();
                        Schade -= Verdedigt;
                        if (Schade < 0) Schade = 0;
                        std::cout << "De speler verdedigt en vermindert de schade met " << Verdedigt << "." << std::endl;
                    }
                    aPlayer.SetHP(aPlayer.GetHP() - Schade);
                    std::cout << "De speler heeft nu " << aPlayer.GetHP() << " HP over." << std::endl;
                    if (aPlayer.GetHP() <= 0) {
                        std::cout << "Je bent verslagen! Game over." << std::endl;
                        break;
                    }
                }
                else if (enemyChoice == 2) {
                    // Enemy defends
                    std::cout << "De vijand verdedigt!" << std::endl;
                    // Player's attack will do half damage on the next round
                    if (choice == 1) {
                        int Schade = aPlayer.GetStrength() / 2; // Halve the player's attack
                        anEnemy.SetHP(anEnemy.GetHP() - Schade);
                        std::cout << "De vijand vermindert de schade en heeft nu " << anEnemy.GetHP() << " HP over." << std::endl;
                    }
                    if (aPlayer.GetHP() <= 0) {
                        std::cout << "Je bent verslagen! Game over." << std::endl;
                        break;
                    }
                    else if (enemyChoice == 2) {
                        std::cout << "De vijand verdedigt!" << std::endl;
                    }
                }
            }
            if (aPlayer.GetHP() <= 0) {
                std::cout << "Je hebt verloren!" << std::endl;
            }
            else if (anEnemy.GetHP() <= 0) {
                std::cout << "Gefeliciteerd, je hebt gewonnen!" << std::endl;
            }
            gameOver = !gameManager.playAgain();
            if (!gameOver) {
                aPlayer.SetHP(200);
                anEnemy.SetHP(150);
                std::cout << "Het gevecht begint opnieuw!" << std::endl;
            }
        }
    }



	

};
