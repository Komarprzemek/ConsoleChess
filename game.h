#ifndef CONSOLECHESS_GAME_H
#define CONSOLECHESS_GAME_H

#include "includes.h"
#include "chess.h"

class Game : Chess{
public:
    Game() = default;
    ~Game() = default;

    struct Round{
        std::string white_move;
        std::string black_move;
    };
    //Information about every round that happens
    std::deque<Round> rounds;

    //Captured pieces
    std::vector<char> white_captured;
    std::vector<char> black_captured;

private:
    char board[8][8];
    int mCurrentTurn{0};
    bool mIsFinished = false;
};


#endif //CONSOLECHESS_GAME_H
