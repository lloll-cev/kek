#include <iostream>
#include <cmath>

int main() {
    double radius;
    const double PI = 3.141592653589793;

    std::cout << "Введите радиус окружности: ";
    std::cin >> radius;
    
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    std::cout << "Длина окружности: " << circumference << std::endl;
    std::cout << "Площадь круга: " << area << std::endl;

    return 0;
}