#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

void calcSum(int a, int b) {
    int sum = a + b;
    cout << "calcSum: " << sum << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    } else {
        double q = static_cast<double>(a) / b;
        cout << fixed << setprecision(2);
        cout << "calcDiv: " << q << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

double retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return static_cast<double>(a) / b;
}

int main() {
    int a, b;

    cout << "Anna luku a: ";
    cin >> a;
    cout << "Anna luku b: ";
    cin >> b;

    // Tulostavat funktiot
    calcSum(a, b);
    calcDiv(a, b);

    // Palauttavat funktiot
    int sum = retSum(a, b);
    cout << "retSum: " << sum << endl;

    try {
        double result = retDiv(a, b);
        cout << fixed << setprecision(2);
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
