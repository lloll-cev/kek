#include <iostream>
#include <cmath>
using namespace std;
int main() { 
    double a, y;
    cout << "Введите значение a: ";
    cin  >> a;
    y=pow(a,2) + 10 / sqrt(pow(a,2)+1);
    cout << "y = a^2 + 10 / √(a^2 + 1) = "<< y << endl;
    
    return 0;

}