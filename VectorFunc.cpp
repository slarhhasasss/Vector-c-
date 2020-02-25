//
// Created by Dmitry Kolesnikov on 25.02.2020.
//

#include "Vector.cpp"
#include <cstdlib>
#include <iostream>

//Constructor
Vector::Vector(int size, int default_items) {
    assert(Vector::MAX_SIZE >= size);
    Vector::buf = (int*)malloc(size * sizeof(int));
    Vector::curSize = size;
    for(int i = 0; i < size; i++) {
        buf[i] = default_items;
    }
}

//Destructor
Vector::~Vector() {
    free(Vector::buf);
    std::cout << "buf had been cleaned\n";
}

//Overload []
int& Vector::operator[](int index) {
    assert(index <= curSize - 1);
    assert(index >= 0);
    return Vector::buf[index];
}

//Узнаем длину
int Vector::getLength() {
    return Vector::curSize;
}

//Узнаем состояние массива
void Vector::dump() {
    if(curSize == 0) {
        std::cout << "Vector is empty :(\n";
        return;
    }
    for(int i = 0; i < Vector::curSize; i++) {
        try {
            std::cout << i + 1 << " element is " << Vector::buf[i] << "\n";
        } catch(...) {
            std::cout << i + 1 << " element has problems!\n";
        }
    }
    return;
}

//Add one more item last and increase curSise
void Vector::addLast(int num) {
    assert(num != NULL);
    assert(Vector::curSize + 1 < Vector::MAX_SIZE);
    Vector::curSize++;
    Vector::buf = (int*) realloc(Vector::buf, Vector::curSize);
    Vector::buf[Vector::curSize - 1] = num;
}
