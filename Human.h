//
// Created by Daniil Kolesnik on 18/04/2021.
//

#ifndef EXCEPTIONS_HUMAN_H
#define EXCEPTIONS_HUMAN_H
#include <string>
#include <iostream>
class Human {
public:
    std::string Name;
    int Age;
    Human(std::string _Name, int _Age) : Name(_Name), Age(_Age){

    };



};


#endif //EXCEPTIONS_HUMAN_H
