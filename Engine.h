//
// Created by Lenovo on 12.11.2018.
//

#ifndef SKILAVERKEFNI_6_ENGINE_H
#define SKILAVERKEFNI_6_ENGINE_H

class Engine {
private:
    int hpM;
public:
    Engine();
    Engine(int hp);
    void setHp(int n);
    int getHp();
    void print();
};

#endif //SKILAVERKEFNI_6_ENGINE_H
