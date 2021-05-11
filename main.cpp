#include <iostream>
#include "Animal.h"
//3. Написать код, в котором происходит утечка памяти при выходе переменной из области видимости, и
//эквивалентный код с использованием объекта класса, спроектированного в соответствии с идиомой
//RAII. Описать (по возможности продемонстрировать) наличие и отсутствие утечки памяти в обоих
//        вариантах соответственно.




void Say_Hi(){
  std::cout << "Hi " << std::endl;
  int* some_pointer = new int [100];
}

void create_animal_weak(){
    Animal_weak();
};

void create_animal_strong(){
    Animal_strong();
};

int main() {
    Say_Hi();
     Animal_weak Animal1();
     create_animal_strong();
     create_animal_weak();
}
