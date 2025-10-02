#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, a, y1, y2;
    cout << "Введите значение x: ";
    cin >> x ;
    y1 = 17 * pow(x,2) - 6 * x + 13 ;
    cout << "y= 17x^2 - 6x + 13 = " << y1 << endl;
    cout << "Введите значение a: ";
    cin >> a;
    y2 = 3 * pow(a,2) + 5 * a - 21;
    cout << "y= 3a^2 + 5a - 21 = " << y2 << endl;

    return 0;
}