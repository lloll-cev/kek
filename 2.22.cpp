#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    double arith = (abs(a) + abs(b)) / 2;
    double geom = sqrt(abs(a) * abs(b));
    cout << "Среднее арифметическое модулей: " << arith << endl;
    cout << "Среднее геометрическое модулей: " << geom << endl;
}