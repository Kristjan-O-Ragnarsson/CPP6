//
// Created by Lenovo on 12.11.2018.
//

#include "Body.h"
#include <iostream>

Body::Body() {
    colorM = "Gold";
}

Body::Body(std::string color) {
    colorM = color;
}

void Body::setColor(std::string color) {
    colorM = color;
}

std::string Body::getColor() {
    return colorM;
}

void Body::print() {
    std::cout << "Body: " << colorM << std::endl;
}