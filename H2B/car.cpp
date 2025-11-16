#include "car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car(string b, string m, int y)
{
    brand = b;
    model = m;
    yearModel = y;
};

void Car::printData() const
{
    cout << brand << "" << model << " (" << yearModel << ")" << endl;
}
