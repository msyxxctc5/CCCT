//
// Created by Despa on 2022/8/8.
//

#ifndef SRC_WEEK3_AVALANCHE_H
#define SRC_WEEK3_AVALANCHE_H
#include "Computer.h"

class Avalanche  : public Computer{
public:

    Avalanche();

    char makeMove() override;

    virtual ~Avalanche();

    private:

    char A_movement = 'R';


};


#endif //SRC_WEEK3_AVALANCHE_H
