//
// Created by Lenovo on 12.11.2018.
//

#include "Wheel.h"
#include <iostream>

Wheel::Wheel() {
    sizeM = 22;
}

Wheel::Wheel(int size) {
    sizeM = size;
}

void Wheel::setSize(int size) {
    sizeM = size;
}

int Wheel::getSize() {
    return sizeM;
}

void Wheel::print() {
    std::cout << "Wheel: " << sizeM << "inches" << std::endl;
}