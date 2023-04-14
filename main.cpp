#include "includes.h"
#include "game.h"
#include "interface.h"


Game* thisGame = nullptr;

void clearScreen();
void printStartScreen();

void printMenu();

void newGame();

int main() {
    bool isGameRun = true;
    clearScreen();
    printStartScreen();
    std::string userInput;

    while(isGameRun){
        printMenu();
        std::cout << "Type here: ";
        std::cin >> userInput;

        if(userInput.length() !=1){
            std::cout << "Invalid input \n";
            continue;
        }

        switch (userInput[0]) {
            case 'N':
            case 'n':
            {
                newGame();
                clearScreen();
                printBoard(*thisGame);

                break;
            }
            case 'M':
            case 'm':
            {
                std::cout << "User picked M\n";
                break;
            }
            case 'Q':
            case 'q':
            {
                std::cout << "User picked Q\n";
                isGameRun = false;
                break;
            }
            default:
                std::cout << "Ths option do not exist\n";

        }
    }

    delete thisGame;
    return 0;
}

void newGame() {
    if(thisGame != nullptr)
        delete thisGame;
    thisGame = new Game();
}

void printMenu() {
    std::cout << "To start new game enter: N, to move enter: M, to quit enter Q \n";
}

void printStartScreen() {
    std::cout << "Console chess game: \n";
}

void clearScreen() {
    system("cls");
}
