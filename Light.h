//
// Created by Lenovo on 12.11.2018.
//

#ifndef SKILAVERKEFNI_6_LIGHT_H
#define SKILAVERKEFNI_6_LIGHT_H


class Light {
private:
    int typeM;
public:
    Light();
    Light(int type);
    void setType(int type);
    int getType();
    void print();
};


#endif //SKILAVERKEFNI_6_LIGHT_H
