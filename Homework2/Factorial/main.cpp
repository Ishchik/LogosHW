#include <iostream>
#include "lib.hpp"

using namespace std;

int main() {

    int value;
    cout << "Enter value : "; cin >> value;
    cout<<"Factorial of " << value << " = " << factorial(value); // Non recursive factorial

    return 0;
}