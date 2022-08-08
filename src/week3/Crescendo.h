//
// Created by Despa on 2022/8/8.
//

#ifndef SRC_WEEK3_CRESCENDO_H
#define SRC_WEEK3_CRESCENDO_H
#include "Computer.h"
#include <vector>

class Crescendo : public Computer {

public:
    Crescendo();

    char makeMove() override;

    virtual ~Crescendo();

private:

    int counter = 0;
    std::vector<char> moves = {'R', 'P', 'S'};



};


#endif //SRC_WEEK3_CRESCENDO_H
