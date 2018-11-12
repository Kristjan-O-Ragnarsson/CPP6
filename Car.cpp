//
// Created by Lenovo on 12.11.2018.
//

#include "Car.h"

Car::Car() {
    for(int i = 0; i < 4; i++){
        w[i] = Wheel();
    }

    for(int i = 0; i < 10 ; i ++){
        int t = i+2;
        l[i] = Light(t/2);
    }
}

void Car::print() {
    e.print();
    for(int i = 0;i < 4; i++){
        w[i].print();
    }
    c.print();
    for(int i = 0; i < 10; i++){
        l[i].print();
    }
    b.print();
}
