#include <iostream>

class SimpleRatio{
public:

private:
    int chys, znam;
    void reduce();


public:
    int getChys() const;

    void setChys(int chys);

    int getZnam() const;

    void setZnam(int znam);

    SimpleRatio() : chys(0), znam(1){}

    SimpleRatio(int n_chys, int n_znam) : chys(n_chys), znam(n_znam){
        reduce();
    }

    friend std::ostream&operator << (std::ostream& os, SimpleRatio& obj);

    friend std::istream&operator >> (std::istream& is, SimpleRatio& obj);

    SimpleRatio operator+(SimpleRatio other);

    SimpleRatio operator-(SimpleRatio other);

    SimpleRatio operator*(SimpleRatio other);

    SimpleRatio operator/(SimpleRatio other);
};

