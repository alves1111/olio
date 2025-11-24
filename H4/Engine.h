#pragma once
#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine();
    Engine(int hp, double disp);

    int getHorsepower() const;
    void setHorsepower(int hp);

    double getDisplacement() const;
    void setDisplacement(double disp);
};