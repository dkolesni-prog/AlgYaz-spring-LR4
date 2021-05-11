//
// Created by Daniil Kolesnik on 18/04/2021.
//

#ifndef EXCEPTIONS_EXCEPTION_H
#define EXCEPTIONS_EXCEPTION_H
#include "stdexcept"
#include <string>
#include "Human.h"
class ExceptionHead: public std::exception {
public:
    std::string name_human_with_head_problem;
    int human_age;
    ExceptionHead(Human H): name_human_with_head_problem(H.Name){
        human_age = H.Age;
    };
    void show() {
        std::cout << "Some important info about ERROR"<< std::endl;
        std::cout << name_human_with_head_problem << std::endl;
        std::cout << human_age << std::endl;
    }

};


#endif //EXCEPTIONS_EXCEPTION_H
