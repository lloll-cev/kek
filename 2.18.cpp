#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, y;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    double z = (x+ (2+y) / (x*y))/(y+1 / sqrt(x * x + 10));
    double q = 7.25 * sin(x) - abs(y);
    cout << "z = " << z << endl;
    cout << "q = " << q << endl;
    return 0;
}