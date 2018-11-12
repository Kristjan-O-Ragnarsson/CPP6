//
// Created by Lenovo on 12.11.2018.
//

#ifndef SKILAVERKEFNI_6_BODY_H
#define SKILAVERKEFNI_6_BODY_H

#include <string>

class Body {
private:
    std::string colorM;
public:
    Body();
    Body(std::string color);
    void setColor(std::string color);
    std::string getColor();
    void print();
};


#endif //SKILAVERKEFNI_6_BODY_H
