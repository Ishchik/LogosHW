#include <iostream>
#include "maxLib.hpp"

int main() {
    int first_val, second_val;

    std::cout << "Enter first value "; std::cin >> first_val;
    std::cout << "Enter second value "; std::cin >> second_val;

    if(maxNum(first_val, second_val) == 1){
        std::cout << "First value is bigger";
    }
    std::cout << "Second value is bigger";
    return 0;
}