#include <iostream>


int my_strlen(char* str){
    int count;

    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main () {

    int new_size = 100;
    char* arr = new char[new_size];

    std::cout << "Enter the string: "; std::cin.getline(arr,new_size,'\n');
    std::cout << "Size of string is " << my_strlen(arr) << " characters long" << std::endl;

    delete [] arr;
    return 0;
}