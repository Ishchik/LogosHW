#include <iostream>
#include "Human.hpp"

bool Human::chooseSide() {
    char piece;
    std::cout << "Choose the side you want to play on" << std::endl;
    std::cin >> piece;
    if(piece == 'X' || piece == 'x'){
        return true;
    }
    else if(piece == 'O' || piece == 'o'){
        return false;
    }
    else{
        std::cout << "Wrong input. Try again" << std::endl;
        chooseSide();
    }
}
