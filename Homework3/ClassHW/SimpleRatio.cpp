#include "SimpleRatio.hpp"

int SimpleRatio::getChys() const {
    return chys;
}

void SimpleRatio::setChys(const int chys) {
    SimpleRatio::chys = chys;
    reduce();
}

int SimpleRatio::getZnam() const {
    return znam;
}

void SimpleRatio::setZnam(const int znam) {
    SimpleRatio::znam = znam;
    reduce();
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
    if (is >> obj.chys) {
        if (is.peek() == '/') {
            char t;
            is >> t;
            is >> obj.znam;
        } else {
            obj.znam = 1;
        }
    }
    return is;
}

std::ostream &operator<<(std::ostream &os, SimpleRatio &obj) {
    os << obj.chys << "/" << obj.znam << std::endl;
    return os;
}

SimpleRatio SimpleRatio::operator+=(const SimpleRatio& rhs) {
    chys = chys * rhs.znam + rhs.chys * znam;
    znam *= rhs.znam;
    reduce();
    return *this;
}

SimpleRatio SimpleRatio::operator-=(const SimpleRatio& rhs) {
    chys = chys * rhs.znam - rhs.chys * znam;
    znam *= rhs.znam;
    reduce();
    return *this;
}

SimpleRatio SimpleRatio::operator*=(const SimpleRatio& rhs) {
    chys *= rhs.chys;
    znam *= rhs.znam;
    reduce();
    return *this;
}

SimpleRatio SimpleRatio::operator/=(const SimpleRatio& rhs) {
    chys *= rhs.znam;
    znam *= rhs.chys;
    reduce();
    return *this;
}

SimpleRatio SimpleRatio::operator+=(const int& val) {
    chys += znam * val;
    reduce();
    return *this;
}

SimpleRatio SimpleRatio::operator-=(const int& val) {
    chys -= znam * val;
    reduce();
    return *this;
}

SimpleRatio SimpleRatio::operator*=(const int& val) {
    chys *= val;
    reduce();
    return *this;
}

SimpleRatio SimpleRatio::operator/=(const int& val) {
    znam *= val;
    reduce();
    return *this;
}

bool SimpleRatio::operator>(SimpleRatio &rhs){
    return ((double) chys / znam) > ((double) rhs.chys / rhs.znam);
}

bool SimpleRatio::operator>=(SimpleRatio &rhs){
    return ((double) chys / znam) >= ((double) rhs.chys / rhs.znam);
}

bool SimpleRatio::operator<(const SimpleRatio &rhs){
    return ((double) chys / znam) < ((double) rhs.chys / rhs.znam);
}

bool SimpleRatio::operator<=(const SimpleRatio &rhs){
    return ((double) chys / znam) <= ((double) rhs.chys / rhs.znam);
}