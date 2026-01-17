#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double x, y, z, a, b, m;
    cout << "Часть а"<< endl;
    cout << "вычисление z = 2x^3 - 3.44xy + 2.3x^2 - 7.1y + 2" << endl;
    cout << "значение х: " << endl;
    cin >> x;
    cout << "значение у: " << endl;
    cin >> y;
    z = 2 * pow(x,3) - 3.44 * x * y + 2.3 * pow(x,2) - 7.1* y + 2;
    cout << fixed << setprecision(4);
    cout << "результат: z = " << z << endl;
    cout << "часть б " << endl;
    cout << "Вычисление х = x = 3.14(a + b)^3 + 2.75b^2 - 12.7a - 4.1 " << endl;
    cout << "значение а: " << endl;
    cin >> a ;
    cout << "значение б: " << endl;
    cin >> b ;
    m = 3.14 * pow(a+b, 3) + 2.75 * pow(b,2) - 12.7 * a - 4.1;
    cout << "результат: х = " << m << endl;
    return 0 ;

}