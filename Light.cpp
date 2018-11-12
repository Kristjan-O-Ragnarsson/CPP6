//
// Created by Lenovo on 12.11.2018.
//

#include "Light.h"
#include <iostream>

Light::Light() {
    typeM = 1;
}

Light::Light(int type) {
    typeM = type;
}

void Light::setType(int type) {
    typeM = type;
}

int Light::getType() {
    return typeM;
}

void Light::print() {
    std::cout << "Light: Type " << typeM << std::endl;
}
