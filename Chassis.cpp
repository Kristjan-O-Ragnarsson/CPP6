//
// Created by Lenovo on 12.11.2018.
//

#include "Chassis.h"
#include <iostream>

Chassis::Chassis() {
    colorM = "Gray";
}

Chassis::Chassis(std::string color) {
    colorM = color;
}

void Chassis::setColor(std::string color) {
    colorM = color;
}

std::string Chassis::getColor() {
    return colorM;
}

void Chassis::print() {
    std::cout << "Chassis: " << colorM << std::endl;
}