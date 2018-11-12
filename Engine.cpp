//
// Created by Lenovo on 12.11.2018.
//
#include "Engine.h"
#include <iostream>

Engine::Engine(int hp) {
    hpM = hp;
}

Engine::Engine() {
    hpM = 120;
}

void Engine::setHp(int n) {
    hpM = n;
}

int Engine::getHp() {
    return hpM;
}

void Engine::print() {
    std::cout << "Engine: " << hpM << std::endl;
}