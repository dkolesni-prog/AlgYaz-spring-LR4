#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Exception.h"
#include "Human.h"

//1. Написать код, в котором методами стандартных библиотек генерируются исключения и обработать
//сгенерированные исключения:
//1) std::out_of_range
//2) std::length_error
//3) std::invalid_argument
//4) std::bad_cast
//5) std::bad_alloc

//2. Реализовать собственный класс-исключение (наследник std::exception или его наследника) и
//        продемонстрировать ситуацию, в которой генерируется и обрабатывается это исключение.



double division(double const &a, double const &b) {
    if (b == 0)
        throw std::invalid_argument("Division by zero");
    else
        return a / b;

}
int* alloc_mem(int GBs){

    int* pointer = new int [(GBs * pow(2, 30) / 4 )];

    return pointer;
}

void naProgib() {
    std::string name;
    int age;
    std::cout << "Throw human"<< std::endl;
    std::cout << "Enter age" << std::endl;
    std::cin >> age;
    std::cout << "Enter name" << std::endl;
    std::cin >> name;
    Human Jeka(name,age);
    throw ExceptionHead(Jeka);
}

int main() {
//    double a = 0;
//    double b = 0;
//    std::cout << "Enter a: " << std::endl;
//    std::cin >> a;
//    std::cout << "Enter b: " << std::endl;
//    std::cin >> b;
//    try {
//        std::cout << "a / b =  " << division(a, b) << std::endl;
//    }
//    catch (const std::exception &ia) {
//        std::cout << ia.what() << std::endl;
//    }
//
////------------------------------------------------------------
//
//    std::string testString = "shookOnes";
//    std::cout << "Enter index to access character" << std::endl;
//    int index;
//    std::cin >> index;
//    try {
//        if (index > testString.length()) throw std::out_of_range("Out of range");
//        std::cout << testString[index] << std::endl;
//    }
//    catch (const std::out_of_range &oor) {
//        std::cout << oor.what() << std::endl;
//    }
//
////------------------------------------------------------------
//
//    try {
//        // vector throws a length_error if resized above max_size
//        std::vector<int> my_vector;
//        my_vector.resize(my_vector.max_size()+1);
//    }
//    catch (const std::length_error& le) {
//        std::cerr << le.what() << std::endl;
//    }
//
////------------------------------------------------------------
//
//    class Parent {virtual void member(){}};
//    class Son : Parent {};
//
//
//        try
//        {
//            Parent p;
//            Son& s = dynamic_cast<Son&>(p);
//        }
//        catch (std::bad_cast& bc)
//        {
//            std::cerr << "bad_cast caught: " << bc.what() << std::endl;
//        }
//------------------------------------------------------------

//    try {
//
//        while (true) {
//
//            for (int i = 0; i < 100000000; ++i) {
//                 alloc_mem(20);
//            }
//
//        }
//    } catch (const std::bad_alloc& ba) {
//        std::cout << "Allocation failed: " << ba.what() << std::endl;
//    }

    try {
        naProgib();
    }
    catch (ExceptionHead &e) {
        e.show();
    }




    return 0;
}