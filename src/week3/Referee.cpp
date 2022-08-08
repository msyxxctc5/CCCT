//
// Created by Despa on 2022/8/8.
//

#include "Referee.h"

Referee::Referee() {

}

Referee::~Referee() {

}

char Referee::refGame(Human player1, Computer player2) {

    switch (player1.getMove()) {

        case 'S':
            return 'L';
        case 's':
            return 'L';
        case 'R':
            return 'T';
        case 'r':
            return 'T';
        case 'P':
            return 'W';
        case 'p':
            return 'W';

        default:

            return 'E';


    }

}
