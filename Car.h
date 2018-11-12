//
// Created by Lenovo on 12.11.2018.
//

#ifndef SKILAVERKEFNI_6_CAR_H
#define SKILAVERKEFNI_6_CAR_H

#include "Engine.h"
#include "Wheel.h"
#include "Light.h"
#include "Chassis.h"
#include "Body.h"

class Car {
private:
    Engine e;
    Body b;
    Chassis c;
    Wheel w [4];
    Light l [10];
public:
    Car();
    void print();
};


#endif //SKILAVERKEFNI_6_CAR_H
