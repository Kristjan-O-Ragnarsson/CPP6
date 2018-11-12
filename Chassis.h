//
// Created by Lenovo on 12.11.2018.
//

#ifndef SKILAVERKEFNI_6_CHASSIS_H
#define SKILAVERKEFNI_6_CHASSIS_H

#include <string>


class Chassis {
private:
    std::string colorM;
public:
    Chassis();
    Chassis(std::string color);
    void setColor(std::string color);
    std::string getColor();
    void print();
};


#endif //SKILAVERKEFNI_6_CHASSIS_H
