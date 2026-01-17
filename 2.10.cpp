#include <iostream>
#include <cmath>
using namespace std;
int main() { 
    int a, b;
    cout << "Введите пару целых чисел" << endl;
    cin >> a >> b;
    double avg = (a+b)/2.0;
    double geom = sqrt(fabs(a*b));
    cout << "среднее арифметическое: " << avg << endl;
    cout << "среднее геометрическое: " << geom << endl;
    return 0;
}