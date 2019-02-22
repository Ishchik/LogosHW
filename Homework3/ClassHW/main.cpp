#include <iostream>
#include "SimpleRatio.hpp"

using namespace std;

int main() {
    int v1 = 2;
    int v2 = 4;

    SimpleRatio a;
    a.setChys(v1);
    a.setZnam(v2);

    SimpleRatio b(4, 5);


    //    SimpleRatio d;
//    cin >> d;

    SimpleRatio c;
//    b / v1;
//
//    cout << b;

    if(a >= b){
        cout << "a";
    }
    else{
        cout << "b";
    }
    return 0;
}