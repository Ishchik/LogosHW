#include <iostream>
#include "mylib.hpp"

int main() {
    int input_value, pow_value;

    std::cout << "Enter base value "; std::cin >> input_value;
    std::cout << "Enter exponent of value "; std::cin >> pow_value;

    std::cout <<"Result is : " << myPow(input_value, pow_value);

    return 0;
}