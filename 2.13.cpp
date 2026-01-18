#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Введите коэффициент a (a ≠ 0): ";
    cin >> a;
    cout << "Введите коэффициент b: ";
    cin >> b;
    double x = -b / a;
    cout << "x = " << x << endl;
    return 0;
}