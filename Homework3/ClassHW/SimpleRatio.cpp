#include "SimpleRatio.hpp"

int SimpleRatio::getChys() const {
    return chys;
}

void SimpleRatio::setChys(int chys) {
    SimpleRatio::chys = chys;
}

int SimpleRatio::getZnam() const {
    return znam;
}

void SimpleRatio::setZnam(int znam) {
    SimpleRatio::znam = znam;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void SimpleRatio::reduce() {
    int gcd_value = gcd(chys, znam);
    chys /= gcd_value;
    znam /= gcd_value;
}

std::istream &operator>>(std::istream &is, SimpleRatio &obj) {
    if(is >> obj.chys){
        if(is.peek() == '/'){
            char t;
            is >> t;
            is >> obj.znam;
        }else{
            obj.znam = 1;
        }
    }
    return is;
}

std::ostream & operator<<(std::ostream &os, SimpleRatio& obj) {
    os << obj.chys << " / " << obj.znam << std::endl;
    return os;
}

SimpleRatio SimpleRatio::operator+(SimpleRatio other) {
    chys = chys * other.znam + other.chys * znam;
    znam *= other.znam;
    reduce();
    return *this;   //returns pointer to an object
}

SimpleRatio SimpleRatio::operator-(SimpleRatio other) {
    chys = chys * other.znam - other.chys * znam;
    znam *= other.znam;
    reduce();
    return *this;
}



SimpleRatio SimpleRatio::operator*(SimpleRatio other) {
    chys *= other.chys;
    znam *= other.znam;
    reduce();
    return *this;
}

SimpleRatio SimpleRatio::operator/(SimpleRatio other) {
    int tmp = other.chys;
    other.chys = other.znam;
    other.znam = tmp;
    chys *= other.chys;
    znam *= other.znam;
    reduce();
    return *this;
}

