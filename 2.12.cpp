#include <iostream>
using namespace std;

int main() {
    int p;
    double a;
    cout << "Введите количество жителей: ";
    cin >> p;
    cout << "Введите площадь территории (км²): ";
    cin >> a;
    double d = p / a;
    cout << "Плотность населения: " << d << " чел/км²" << endl;
    return 0; }