#include <iostream>

void clearScreen();
void printStartScreen();

void printMenu();

int main() {
    bool isGameRun = true;
    clearScreen();
    printStartScreen();
    std::string userInput {""};

    while(isGameRun){
        printMenu();
        std::cout << "Type here: ";
        std::cin >> userInput;

        switch (userInput[0]) {
            case 'N':
            case 'n':
            {
                std::cout << "User picked N\n";
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

        }
    }

    return 0;
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
