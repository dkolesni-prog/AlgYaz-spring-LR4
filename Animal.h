//
// Created by Daniil Kolesnik on 18/04/2021.
//

#ifndef EXCEPTIONS_PART2_ANIMAL_H
#define EXCEPTIONS_PART2_ANIMAL_H
#include <iostream>

class Animal_weak {
public:
    int* length_leg;
    Animal_weak(){
        length_leg = new int [4];
        std::cout << "set the length" << std::endl;
        for (int i = 0; i < ; ++i) {
            std::cin >> length_leg[i];
        }
    }
};

class Animal_strong {
public:
    int* length_leg;
    Animal_strong(){
        length_leg = new int [4];
        std::cout << "set the length" << std::endl;
        for (int i = 0; i < ; ++i) {
            std::cin >> length_leg[i];
        }
    }
    ~Animal_strong(){
        delete length_leg;
    }
    Animal_strong(const Animal_strong&) = delete;
    Animal_strong& operator=(const Animal_strong&) = delete;
};


#endif //EXCEPTIONS_PART2_ANIMAL_H
