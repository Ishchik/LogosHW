#include <iostream>
#include "vector.h"

int main() {
//    MyVector a(4, 12);

    MyVector a { 1, 2, 4, 5};

    a.pushBack(5);
    a.pushFront(3);
//    std::cout << a.getSize() << std::endl; // << a.getCapacity() << std::endl;
//    a.get();
    a.popBack();
//    a.get();
//    std::cout << std::endl << a.getSize() << std::endl; // << a.getCapacity() << std::endl;

//    std::cout << a[4] << std::endl;

    a.popFront();

    a.get();

    std::cout << std::endl << a.getSize() << std::endl; // << a.getCapacity() << std::endl;


    return 0;
}