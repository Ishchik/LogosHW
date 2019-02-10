#include <iostream>

char* my_print(char* str){
    std::cout << "This is string " << std::endl;
    return str;
}

double my_print(double double_val){
    std::cout << "This is double " << std::endl;
    return double_val;
}

int my_print(int i_val){
    std::cout << "This is int " << std::endl;
    return i_val;
}