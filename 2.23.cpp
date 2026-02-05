#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cout << "Введите длину: ";
    cin >> a;
    cout << "Введите ширину: ";
    cin >> b;
    double p = 2 * (a + b);
    double d = sqrt(a * a + b * b);
    cout << "Периметр: " << p << endl;
    cout << "Диагональ: " << d << endl;
}