#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double e, f, g, h;
    cout << "Введите e: ";
    cin >> e;
    cout << "Введите f: ";
    cin >> f;
    cout << "Введите g: ";
    cin >> g;
    cout << "Введите h: ";
    cin >> h;
    double a = cbrt(pow(abs(e - 5 / f), 5) + g);
    double b = sin(e) + pow(cos(h), 2);
    double c = 35 * g / (e * f - 3);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}