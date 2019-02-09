#include "mylib.hpp"

double myPow(const double val, int pow_val){
    double result = val;

    if(pow_val > 1){
        for(int i = 1; i < pow_val; i++){
            result = result * val;
        }
        return result;
    }
    else if(pow_val == 1){
        return val;
    }
    else if(pow_val < 0){
        pow_val = pow_val * -1;

        for(int i = 1; i < pow_val; i++){
            result = result * val;
        }

        return 1 / result;
    }
    return 1;
}