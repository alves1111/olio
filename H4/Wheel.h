#pragma once
#include <iostream>
#include <string>
using namespace std;

class Wheel {
private:
    int size;        
    string type;     
public:
    Wheel();                        
    Wheel(int s, const string& t);

    int getSize() const;
    void setSize(int s);

    string getType() const;
    void setType(const string& t);
};
