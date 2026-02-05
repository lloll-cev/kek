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
    double a = (e + f / 2) / 3;
    double b = abs(h * h - g);
    double c = sqrt((g - h) * (g - h) - 3 * sin(e));
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}