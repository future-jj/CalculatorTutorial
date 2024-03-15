#include "TowerDefenseGame.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

const int MAP_WIDTH = 20;
const int MAP_HEIGHT = 10;

TowerDefenseGame::TowerDefenseGame() : isGameOver(false) {
    // Initialize the map
    map.resize(MAP_HEIGHT, std::vector<char>(MAP_WIDTH, '.'));

    // Place player and enemy randomly
    srand(time(0));
    playerPos = std::make_pair(rand() % MAP_HEIGHT, rand() % MAP_WIDTH);
    do {
        enemyPos = std::make_pair(rand() % MAP_HEIGHT, rand() % MAP_WIDTH);
    } while (enemyPos == playerPos);

    // Set player and enemy on the map
    map[playerPos.first][playerPos.second] = 'P';
    map[enemyPos.first][enemyPos.second] = 'E';
}

void TowerDefenseGame::displayMap() {
    for (int i = 0; i < MAP_HEIGHT; ++i) {
        for (int j = 0; j < MAP_WIDTH; ++j) {
            std::cout << map[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void TowerDefenseGame::movePlayer(char direction) {
    int newPosX = playerPos.first;
    int newPosY = playerPos.second;

    switch (direction) {
    case 'W': newPosX--; break;
    case 'S': newPosX++; break;
    case 'A': newPosY--; break;
    case 'D': newPosY++; break;
    default: return;
    }

    // Check if the new position is valid
    if (newPosX >= 0 && newPosX < MAP_HEIGHT && newPosY >= 0 && newPosY < MAP_WIDTH) {
        // Move player
        map[playerPos.first][playerPos.second] = '.';
        playerPos = std::make_pair(newPosX, newPosY);
        map[playerPos.first][playerPos.second] = 'P';

        // Check if player meets enemy
        if (playerPos == enemyPos) {
            std::cout << "Game Over! Enemy defeated you!" << std::endl;
            isGameOver = true;
        }
    }
}

bool TowerDefenseGame::gameOver() {
    return isGameOver;
}
