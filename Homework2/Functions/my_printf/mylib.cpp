#include "mylib.hpp"
#include <cstdarg>
#include <iostream>

int my_printf(const char *str, ...) {
    va_list argptr;        //ptr to first argument
    va_start(argptr, str);   //starts reading arguments after
                             //last fixed argument(str)
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '%' && str[i + 1] == 'i') {
            int arg = va_arg(argptr, int);
            std::cout << arg;
            i = i + 2;
        } else if (str[i] == '%' && str[i + 1] == 's') {
            char *arg = va_arg(argptr, char*);
            std::cout << arg;
            i = i + 2;
        } else if (str[i] == '%' && str[i + 1] == 'd') {
            double arg = va_arg(argptr, double);
            std::cout << arg;
            i = i + 2;
        } else {
            std::cout << str[i];
            i++;
        }
    }

    va_end(argptr);

    return 0;
}
