#include "lib.hpp"

int factorial(int x){
    if(x>1){
        int value = x;
        for(x; x>1; x--) {
            value = value * (x - 1);
        }
        return value;
    }
    else if(x == 0){
        return 1;
    }
    return -1;
}