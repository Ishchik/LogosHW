#include <iostream>
#include "vector.h"

int main() {
    MyVector a(4, 12);

    //a.resizeVector(15);
    a.pushBack(5);
    a.pushFront(3);
    std::cout << a.getSize() << std::endl; // << a.getCapacity() << std::endl;
    a.get();
    a.popBack();
    a.get();
    std::cout << std::endl << a.getSize() << std::endl; // << a.getCapacity() << std::endl;
    return 0;
}