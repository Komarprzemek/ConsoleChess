#ifndef CONSOLECHESS_CHESS_H
#define CONSOLECHESS_CHESS_H

#include "includes.h"

class Chess {
public:
    static int getPieceColor (char piece);

    enum class PieceColor{
        WHITE = 0,
        BLACK = 1,
    };
    enum class Player{
        WHITE_PLAYER = 0,
        BLACK_PLAYER = 1,
    };
    struct Position{
        int iRow {0};
        int iColumn {0};
    };

    const char initial_board[8][8] = {
            {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
            {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
            {0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
            {0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
            {0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
            {0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
            {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
            {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
    };

};

#endif //CONSOLECHESS_CHESS_H
