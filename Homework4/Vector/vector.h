#include <iostream>


class MyVector {
    //push_back(el)   .
    //push_front(el)    .
    //clear             .
    //delete_back(el)
    // operator <<
    // operator +
    // operator -
    //get_size             .
    //get_capacity        .
    // operator ==
    // operator !=

private:
    int *vector;
    const size_t default_capacity = 7;
    size_t capacity;
    size_t size = 0;

public:
    MyVector(std::initializer_list<int>& init_values) : size(init_values.size()), capacity(init_values.size() + default_capacity){
        vector = new int [capacity];
        int i = 0;
        for(int el : init_values){
            vector[i] = el;
            i++;
        }
    };

    MyVector(const size_t m_size,const int& init_val) : size(m_size), capacity(m_size + default_capacity){
        vector = new int [capacity];
        for (int i = 0; i < size; ++i) {
            vector[i] = init_val;
        }
    };

    MyVector() : size(default_capacity), capacity(default_capacity){
        vector = new int [capacity];
    };

    void resize(const size_t new_size);

    void pushBack(const int& val);

    void pushFront(const int& val);

    void clear();

    void popBack();

    size_t getSize() const;

    size_t getCapacity() const;

    //debug
    void get(){
        for(int i = 0; i < size; i++){
            std::cout << vector[i] << std::endl;
        }
    }
};