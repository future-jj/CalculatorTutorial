#pragma once

#ifndef TOWERDEFENSEGAME_H
#define TOWERDEFENSEGAME_H

#include <vector>
#include <utility>

class TowerDefenseGame
{
private:
    std::vector<std::vector<char>> map;
    std::pair<int, int> playerPos;
    std::pair<int, int> enemyPos;
    bool isGameOver;

public:
    TowerDefenseGame();
    void displayMap();
    void movePlayer(char direction);
    bool gameOver();
};
#endif // TOWERDEFENSEGAME_H

