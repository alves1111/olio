#include "Car.h"

Car::Car(const string& brand, const string& model)
    : brand(brand), model(model) {}


string Car::getBrand() const {
    return brand;
}

void Car::setBrand(const string& b) {
    brand = b;
}

string Car::getModel() const {
    return model;
}

void Car::setModel(const string& m) {
    model = m;
}


void Car::setEngine() {
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

void Car::setWheels() {
    
    for (int i = 0; i < 4; ++i) {
        wheels[i].setSize(17);
        wheels[i].setType("kesarengas");
    }
}

void Car::printDetails() const {
    cout << "Auton merkki: " << brand << endl;
    cout << "Auton malli : " << model << endl;

    cout << "Moottori: " 
         << engine.getHorsepower() << " hv, "
         << engine.getDisplacement() << " L" << endl;

    cout << "Renkaat:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "  Rengas " << (i + 1)
             << ": koko " << wheels[i].getSize()
             << ", tyyppi " << wheels[i].getType() << endl;
    }
}
