#include <iostream>

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

int main() {
    int input_value, pow_value;

    std::cout << "Enter base value "; std::cin >> input_value;
    std::cout << "Enter exponent of value "; std::cin >> pow_value;

    std::cout <<"Result is : " << myPow(input_value, pow_value);

    return 0;
}