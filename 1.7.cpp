#include <iostream>
#include <string>

int main() {
    std::string name;
    std::getline(std::cin, name); // Считываем имя (включая пробелы)
    std::cout << "Привет, " << name << "!" << std::endl;
    return 0;
}