#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "Engine.h"
#include "Wheel.h"

class Car {
private:
    Engine engine;      
    Wheel wheels[4];    
    string model;       
    string brand;       

public:
    Car(const string& brand, const string& model);

    string getBrand() const;
    void setBrand(const string& b);

    string getModel() const;
    void setModel(const string& m);

    void setEngine();   
    void setWheels();   

    void printDetails() const;
};
