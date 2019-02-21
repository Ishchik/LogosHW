#include <iostream>
#include "SimpleRatio.hpp"

using namespace std;

int main() {
    int v1 = 2;
    int v2 = 3;

    SimpleRatio a;
    a.setChys(v1);
    a.setZnam(v2);

    SimpleRatio b(4, 7);

    SimpleRatio d;
    cin >> d;

    SimpleRatio c;
    c = a / b;

    cout << c;
    return 0;
}