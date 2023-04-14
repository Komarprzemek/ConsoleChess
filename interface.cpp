#include "interface.h"

void printBoard(Game &game) {
    std::cout << "   A     B     C     D     E     F     G     H\n\n";

    for(int line = 7; line >= 0; line--){
        if(line%2 == 0){
            //printLine();
        }
        else{
            //printLine();
        }
    }
}

void printLine(int boardLine, int boardColor1, int boardColor2, Game &game) {

}
