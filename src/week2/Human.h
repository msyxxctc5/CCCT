//
// Created by Despa on 2022/8/8.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_HUMAN_H
#define CMAKE_CLION_CONAN_TEMPLATE_HUMAN_H



class Human{

public:

    Human();

    char makeMove();

    char getMove();

    virtual ~Human();


private:
    char movement;

};


#endif //CMAKE_CLION_CONAN_TEMPLATE_HUMAN_H
