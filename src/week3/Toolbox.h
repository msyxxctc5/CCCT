//
// Created by Despa on 2022/8/8.
//

#ifndef SRC_WEEK3_TOOLBOX_H
#define SRC_WEEK3_TOOLBOX_H
#include "Computer.h"


class Toolbox : public Computer{

public:

    Toolbox();

    char makeMove() override;

    virtual ~Toolbox();



private:

    char T_movement = 'S';


};


#endif //SRC_WEEK3_TOOLBOX_H
