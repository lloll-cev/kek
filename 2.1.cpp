#include <iostream>
#include <cmath>
using namespace std;
int main() {  
    double a;
    cout << "Введите значение х: ";
    cin >> a;
    double ra = sqrt((2*a + sin(fabs(3*a))) / 3.56 );
    cout << "Значение функции для а: " << ra << endl;

    double x;
    cout << "Введите значение х (x != 0 и x >= -1): ";
    cin >> x;
    if (x==0 || ( 1 + x)< 0) { 
        cout << "Недопустимое значение x" << endl;
    } else { 
    double rx = sin (3.2 + sqrt(1+x) / fabs(5*x));
    cout << "Значение функции для x: " << rx << endl;
}
    return 0;
}
