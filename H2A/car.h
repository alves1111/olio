#ifndef CAR_H
#define CAR_H
#pragma once
#include <string>

class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    void printData() const;
    void setBrand(const std::string& newBrand);
    void setModel(const std::string& newModel);
    void setYearModel(int newYearModel);
};

#endif // CAR_H
