#ifndef CONSOLECHESS_INTERFACE_H
#define CONSOLECHESS_INTERFACE_H

#include "includes.h"
#include "game.h"

void printBoard(Game & game);
void printLine(int boardLine, int boardColor1, int boardColor2, Game &game);

#endif //CONSOLECHESS_INTERFACE_H
