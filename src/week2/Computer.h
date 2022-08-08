//
// Created by Despa on 2022/8/8.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_COMPUTER_H
#define CMAKE_CLION_CONAN_TEMPLATE_COMPUTER_H
#include "Player.h"


class Computer : public Player{
public:

    Computer();

    char makeMove() override;

    char getMove();

    virtual ~Computer();


private:

    char movement = 'R';

};


#endif //CMAKE_CLION_CONAN_TEMPLATE_COMPUTER_H
