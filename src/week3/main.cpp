//
// Created by Despa on 2022/8/8.
//
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include<iostream>
using namespace std;

int main(){

    Human *h = new Human();

    Computer *c = new Computer();

    Referee *r = new Referee();
    h->makeMove();

    
   cout<< r->refGame(*h,*c) << endl;


    delete r;
    delete c;
    delete h;

}