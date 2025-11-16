#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    // 1) Luo vektori pinomuistiin
    vector<Car> carList;

    // 2) Lisää kolme Car-oliota listaan
    carList.push_back(Car("Toyota", "Corolla", 2010));
    carList.push_back(Car("BMW", "320i", 2015));
    carList.push_back(Car("Audi", "A4", 2018));

    // 3) Tulosta listan toisen alkion tiedot
    cout << "Toinen auto listassa:\n";
    carList[1].printData();

    cout << "\nKaikki autot listassa:\n";


    for (int i = 0; i < carList.size(); ++i)
    {
        carList[i].printData();
    }

    return 0;
}
