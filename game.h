#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    ~Game();
    void Draw();
    void HandleInput();
    void MoveBlockDown();
    bool gameOver;
    int score;
    Music music;

private:
    void MoveBlockLeft();
    void MoveBlockRight();
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    void UpdateScore(int linesCleared, int moveDownPoints);
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
    Grid grid;
    Sound rotateSound;
    Sound clearSound;
};