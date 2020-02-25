//
// Created by Dmitry Kolesnikov on 25.02.2020.
//


#include <cstdlib>
#include <cassert>
#include <iostream>


class Vector{
private:
    int *buf;
    int curSize;
    const int MAX_SIZE = 100;
public:
    Vector(int size, int default_itmes);       //Constructor
    ~Vector();                                 //Destructor
    int& operator[](int index);                //Overload []
    int getLength();                           //Возвращает Длину массива
    void dump();                               //состояние массива (выводим в строку)
    void addLast(int num);

};



