#include "TowerDefenseGame.h"
#include <iostream>

int main() {
    TowerDefenseGame game;

    std::cout << "Welcome to Tower Defense Game!" << std::endl;
    std::cout << "Use W, A, S, D keys to move the player. Avoid the enemy!" << std::endl;

    while (!game.gameOver()) {
        game.displayMap();
        char move;
        std::cout << "Enter your move (W/A/S/D): ";
        std::cin >> move;
        game.movePlayer(move);
    }

    return 0;
}
