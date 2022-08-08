//
// Created by Despa on 2022/8/8.
//

#include "Referee.h"

Referee::Referee() {

}

Referee::~Referee() {

}

char Referee::refGame(Human player1, Computer player2) {

    switch (player2.getMove()) {

        case 'S':
           return 'L';
        case 'R':
            return 'T';
        case 'P':
            return 'W';

        default:

            return 'E';


    }

}
