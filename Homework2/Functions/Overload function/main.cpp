#include <iostream>
#include "mylib.hpp"

int main() {

    int a;
    std::cin >> a;
    std::cout << my_print(a) << std::endl;      //for my_print(int)

    double b;
    std::cin >> b;
    std::cout << my_print(b) << std::endl;      //for my_print(double)

    char* c;
    std::cin >> c;
    std::cout << my_print(c) << std::endl;      //for my_print(char*)


    return 0;
}