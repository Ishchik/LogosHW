#include "vector.h"

void MyVector::resize_vector(size_t user_size) {
    if(user_size >= capacity){
        while(user_size >= capacity){
            capacity += 10;
        }
        new_vector = new int [capacity];
    }
}

void MyVector::pushBack(int el) {


}
