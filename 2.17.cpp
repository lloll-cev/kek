#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, h;
    cout << "Ввелите большее оснвание а: ";
    cin >> a;
    cout << "Введите меньшее основание b: ";
    cin >> b;
    cout << "Введите высоту h: ";
    cin >> h;
    double s = sqrt(h*h + pow((a-b)/2,2));
    double p = a + b + 2 * s;
    cout << "Периметр трапеции: " << p << endl ;
    return 0;

}