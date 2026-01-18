#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double R, r;
    cout << "Введите внешний радиус R: ";
    cin >> R;
    cout << "Введите внутренний радиус r: ";
    cin >> r;
    double area = M_PI * (R * R - r * r);
    cout << "Площадь кольца: " << area << endl;
    return 0;
}