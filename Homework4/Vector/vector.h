#include <iostream>

const size_t default_capacity = 7;

class MyVector{
    //push_back(el)
    //push_front(el)
    //clear
    //delete_back(el)
    // operator <<
    // operator +
    // operator -
    //get_size
    //get_capacity
    // operator ==
    // operator !=

public:
    MyVector(size_t user_size): capacity(user_size){
        resize_vector(user_size);
    }

//    MyVector(): MyVector(0, 0){
//    }

    MyVector(size_t user_size, int initial_value):
    capacity(default_capacity + user_size),
        new_vector(new int[default_capacity + user_size])
    {
            for(int i = 0; i < user_size; i++){
                new_vector[i] = initial_value;
            }

    }

    MyVector (const std::initializer_list<int> &initial_value):
    new_vector(new int [initial_value.size()])
    {
        int i = 0;
        resize_vector(capacity);

        for(int el: initial_value){
            new_vector[i++] = el;
        }
    }

    void pushBack(int el);






    void get(){
        for(int i = 0; i < capacity; i++){
            std::cout << new_vector[i] << std::endl;
        }
    }

private:
    int* new_vector;
    size_t capacity;

    void resize_vector(size_t user_size);
};