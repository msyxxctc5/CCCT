//
// Created by Despa on 2022/8/8.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_REFEREE_H
#define CMAKE_CLION_CONAN_TEMPLATE_REFEREE_H
#include "Human.h"
#include "Computer.h"


class Referee {

public:
    Referee();


    char refGame(Human player1, Computer player2);

    virtual ~Referee();

private:


};


#endif //CMAKE_CLION_CONAN_TEMPLATE_REFEREE_H
