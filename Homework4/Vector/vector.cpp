#include "vector.h"
#include <string>

void MyVector::resize(const size_t new_size) {
    int *new_vector = new int[new_size];
    for (int i = 0; i < size; i++) {
        new_vector[i] = vector[i];
    }

    if (capacity <= new_size) {
        while (capacity < new_size) {
            capacity += default_capacity;
        }
    }

    size = new_size;
    vector = new int[size];

    for (int i = 0; i < size; i++) {
        vector[i] = new_vector[i];
    }

    delete[] new_vector;
}

void MyVector::pushBack(const int &val) {
    resize(++size);
    vector[size - 1] = val;
}

void MyVector::pushFront(const int &val) {
    resize(++size);
    for(size_t i = size -1;i  > 0; i--){
        int tmp = vector[i];
        vector[i] = vector[i-1];
        vector[i-1] = tmp;
    }
    vector[0] = val;
}

size_t MyVector::getSize() const {
    return size;
}

size_t MyVector::getCapacity() const {
    return capacity;
}

void MyVector::clear() {
    vector = new int [default_capacity];
    capacity = default_capacity;
    size = 0;
}

void MyVector::popBack() {
    resize(--size);
}
