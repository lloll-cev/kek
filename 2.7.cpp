#include <iostream>
#include <cmath>

int main() {
    double edgeLength;
    
    std::cout << "Введите длину ребра куба: ";
    std::cin >> edgeLength;
    
    // Вычисляем объем куба: V = a³
    double volume = pow(edgeLength, 3);
    
    // Вычисляем площадь боковой поверхности: S = 4a²
    // (боковая поверхность - это 4 грани из 6)
    double lateralSurfaceArea = 4 * pow(edgeLength, 2);
    
    std::cout << "Объем куба: " << volume << std::endl;
    std::cout << "Площадь боковой поверхности: " << lateralSurfaceArea << std::endl;
    
    return 0;
}