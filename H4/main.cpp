#include "Car.h"

int main() {
    Car car("Toyota", "Corolla");

    car.setEngine();
    car.setWheels();

    car.printDetails();

    return 0;
}
