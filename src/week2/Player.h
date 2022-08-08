//
// Created by Despa on 2022/8/6.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_PLAYER_H
#define CMAKE_CLION_CONAN_TEMPLATE_PLAYER_H


class Player {

public:

    Player();

    virtual char makeMove() = 0;

    virtual ~Player();

};


#endif //CMAKE_CLION_CONAN_TEMPLATE_PLAYER_H
