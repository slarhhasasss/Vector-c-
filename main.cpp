#include <iostream>
#include "Vector.cpp"

int main() {
    //testing
    auto *v = new Vector(2, 0);
    //std::cin >> (*v)[0];
    //std::cout << (*v)[0] <<std::endl;
    v->dump();
    v->addLast(2);
    v->dump();
    (*v)[2] = 3;
    v->dump();
    delete v;

    return 0;
}
