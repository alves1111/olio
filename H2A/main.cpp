#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    // 1) Car – olio pinomuistiin
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2010);
    myCar.printData();

    // 2) Rectangle – olio kekomuistiin (new/delete)
    Rectangle* rect = new Rectangle;
    rect->setWidth(3.0);
    rect->setHeight(4.0);

    cout << "Rectangle area: " << rect->getArea() << endl;
    cout << "Rectangle circum: " << rect->getCircum() << endl;

    delete rect; // tuhoa kekoon luotu olio

    // 3) Student – olio smart pointerilla (unique_ptr)
    unique_ptr<Student> student = make_unique<Student>();
    student->setName("Aleksi");
    student->setStudentNumber(12345);
    student->setAverage(4.2);

    cout << "Student name: " << student->getName() << endl;
    cout << "Student number: " << student->getStudentNumber() << endl;
    cout << "Student average: " << student->getAverage() << endl;

    return 0;
}
