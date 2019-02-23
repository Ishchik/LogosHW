#include <iostream>

class SimpleRatio{
public:

private:
    int chys, znam;
    void reduce();


public:
    int getChys() const;

    void setChys(const int chys) ;

    int getZnam() const;

    void setZnam(const int znam);

    SimpleRatio() : chys(0), znam(1){}

    SimpleRatio(int n_chys, int n_znam) : chys(n_chys), znam(n_znam){
        reduce();
    }

    friend std::ostream&operator << (std::ostream& os, SimpleRatio& obj);

    friend std::istream&operator >> (std::istream& is, SimpleRatio& obj);

    // +
    SimpleRatio operator+=(const SimpleRatio& rhs);

    inline SimpleRatio operator+(const SimpleRatio& rhs){
        return *this += rhs;
    }

    SimpleRatio operator+=(const int& val);

    inline SimpleRatio operator+(const int& val){
        return *this += val;
    }

    // -
    SimpleRatio operator-=(const SimpleRatio& rhs);

    inline SimpleRatio operator-(const SimpleRatio& rhs){
        return *this -= rhs;
    }

    SimpleRatio operator-=(const int& val);

    inline SimpleRatio operator-(const int& val){
        return *this -= val;
    }

    // *

    SimpleRatio operator*=(const SimpleRatio& rhs);

    inline SimpleRatio operator*(const SimpleRatio& rhs){
//        auto tmp = *this;
//        return tmp *= rhs;
        return *this *= rhs;
    }

    SimpleRatio operator*=(const int& val);

    inline SimpleRatio operator*(const int& val){
        return *this *= val;
    }

    //  /

    SimpleRatio operator/=(const SimpleRatio& rhs);

    inline SimpleRatio operator/(const SimpleRatio& rhs){
        return  *this /= rhs;
    }

    SimpleRatio operator/=(const int& val);

    inline SimpleRatio operator/(const int val){
        return *this /= val;
    }

    //  logical
    bool operator>(SimpleRatio& rhs) ;

    bool operator>=(SimpleRatio& rhs);

    bool operator<(const SimpleRatio& rhs);

    bool operator<=(const SimpleRatio& rhs);
};

