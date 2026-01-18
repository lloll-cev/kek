#include <iostream>
using namespace std;

int main() {
    double m, v;
    cout << "Введите массу тела (кг): ";
    cin >> m;
    cout << "Введите объем тела (м³): ";
    cin >> v;
    double d = m / v;
    cout << "Плотность материала: " << d << " кг/м³" << endl;
    return 0;
}