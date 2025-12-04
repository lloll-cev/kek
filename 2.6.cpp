#include <iostream>
#include <cmath>
using namespace std;
int main(){ const double r = 6350;
double h_m;
cout << "Введите высоту над поверхностью(в метрах): ";
cin >> h_m;
if (h_m < 0){
cout << "Ошибка" ; return 1; }
double h = h_m/1000;
double d = sqrt(2 * r * h + h*h);
cout << "Расстояние до горизонта: " << d ; return 0; }
