#include <iostream>
#include <cmath>
using namespace std;
int main() {
   double a, b;
   cout << "Введите a:";
   cin >> a;
   cout << "Введите b: ";
   cin >> b;
   double x = ((2/(a*a+25))+b)/(sqrt(b)+(a+b)/2);
   double y = (abs(a)+ 2 * sin(b))/(5.5*a);
   cout << "x = " << x << endl;
   cout << "y = " << y << endl;
}