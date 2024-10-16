#pragma once
#include <iostream>
#include <cstdlib>

class GameManager
{
public:
    GameManager() {}

    // Method to ask if the player wants to play again
    bool playAgain() {
        char choice;
        std::cout << "Wil je opnieuw spelen? (j/n): ";
        std::cin >> choice;

        if (choice == 'j' || choice == 'J') {
            clearConsole();
            return true;  // Start a new game
        }
        return false;  // Exit the game
    }
    void clearConsole() {
#ifdef _WIN32
        system("cls");  
#else
        system("clear"); 
#endif
    }

    ~GameManager() {}
};
