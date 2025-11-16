#include "car.h"
#include <iostream>

using namespace std;

void Car::printData() const {
    cout << brand << " " << model << " (" << yearModel << ")" << endl;

}

void Car::setBrand(const string& newBrand) {
    brand = newBrand;
}

void Car::setModel(const string& newModel) {
    model = newModel;
}

void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel;
}
