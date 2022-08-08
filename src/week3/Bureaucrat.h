//
// Created by Despa on 2022/8/8.
//

#ifndef SRC_WEEK3_BUREAUCRAT_H
#define SRC_WEEK3_BUREAUCRAT_H
#include "Computer.h"

class Bureaucrat : public Computer{

public:

    Bureaucrat();

    char makeMove() override;

    ~Bureaucrat();
private:

    char B_movement = 'P';


};


#endif //SRC_WEEK3_BUREAUCRAT_H
