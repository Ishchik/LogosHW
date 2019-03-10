#include "vector.h"

void MyVector::resize(const size_t new_size) {
    if (capacity <= new_size) {
        while (capacity <= new_size) {
            capacity += default_capacity;
        }
        vector = static_cast<int *>(realloc(vector, capacity));
    }

    size = new_size;
}

void MyVector::pushBack(const int &val) {
    resize(++size);
    vector[size - 1] = val;
}

void MyVector::pushFront(const int &val) {
    resize(++size);
    for (size_t i = size - 1; i > 0; i--) {
        std::swap(vector[i], vector[i - 1]);
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
    size = 0;
}

void MyVector::popBack() {
    resize(--size);
}

const int &MyVector::operator[](int index) const {
    return vector[index];
}

int &MyVector::operator[](int index) {
    return vector[index];
}

void MyVector::popFront() {
    for (int i = 0; i < size; i++) {
        vector[i] = vector[i + 1];
    }
    resize(--size);
}

std::ostream& operator<<(std::ostream& os, MyVector& obj) {
    for (int i = 0; i < obj.size; i++) {
        os << obj.vector[i] << ' ';
    }
    return os;
}
