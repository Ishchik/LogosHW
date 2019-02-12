#include <iostream>
#include "mylib.hpp"


int main() {
    int a = 1;
    const char* c = "char";
    double d = 0.2;

    my_printf("st %i ri%dn %s%i g", a, d, c, d);

    return 0;
}