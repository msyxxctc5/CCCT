//
// Created by Despa on 2022/8/8.
//

#include "Human.h"
#include<iostream>

using namespace std;

Human::Human() {}

Human::~Human() {

}

char Human::makeMove() {
    cin >> this->movement;

    return this->movement;
}

char Human::getMove() {
    return this->movement;
};
