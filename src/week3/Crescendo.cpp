//
// Created by Despa on 2022/8/8.
//

/*
Crescendo moves in the following order: Paper, Scissors, Rock.
*/

#include "Crescendo.h"

Crescendo::Crescendo() {

}

Crescendo::~Crescendo() {

}

char Crescendo::makeMove() {



    return moves.at(counter%3);

    counter++;





}
