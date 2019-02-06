#include <iostream>

int my_strcmp(char* str1, char* str2) {
    for(int i = 0; *str1 == *str2; i++) {
        if(*str1+1 != *str2+1){
            if(((int)*str1+1 - (int)*str2+1) < 0){
                return (int)*str1+1 - (int)*str2+1;
            }
            else if(((int)*str1+1 - (int)*str2+1) > 0){
                return (int)*str1+1 - (int)*str2;
            }
        }
        else if(*str1+1 == '\0' && *str2+1 == '\0'){
            return 0;
        }
        str1++;
        str2++;
    }
}

int main() {
    unsigned  int new_size = 100;
    char* string1 = new char [new_size];
    char* string2 = new char [new_size];

    std::cout << "Enter first string"; std::cin.getline(string1, new_size, '\n');
    std::cout << "Enter second string"; std::cin.getline(string2, new_size, '\n');

//    if(my_strcmp(string1, string2) == 0){
//        std::cout << "Strings are equal" << std::endl;
//    }
//    else if(my_strcmp(string1, string2) < 0){
//        std::cout << "String #1 < String #2" << std::endl;
//    }
//    else{
//        std::cout << "String #1 > String #2" << std::endl;
//    }

    std::cout << my_strcmp(string1,string2);


    delete [] string1;
    delete [] string2;

    return 0;
}