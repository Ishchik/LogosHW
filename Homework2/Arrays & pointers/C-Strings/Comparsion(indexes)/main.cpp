#include <iostream>
#include <string.h>

int my_strcmp(const char* str1,const char* str2) {
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]){
            break;
        }
        i++;
    }

    if(str1[i] == str2[i]){
        return 0;
    }
    return str1[i] < str2[i] ? -1 : 1;
}

int main() {
    unsigned  int new_size = 100;
    char* string1 = new char [new_size];
    char* string2 = new char [new_size];

    std::cout << "Enter first string "; std::cin.getline(string1, new_size, '\n');
    std::cout << "Enter second string "; std::cin.getline(string2, new_size, '\n');

    if(my_strcmp(string1, string2) == 0){
        std::cout << "Strings are equal" << std::endl;
    }
    else if(my_strcmp(string1, string2) < 0){
        std::cout << "String #1 < String #2" << std::endl;
    }
    else{
        std::cout << "String #1 > String #2" << std::endl;
    }

    delete [] string1;
    delete [] string2;

    return 0;
}