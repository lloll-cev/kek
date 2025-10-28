#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout<<"Название футбольной команды:";
    std::getline(std::cin, name); // Считываем имя (включая пробелы)
    std::cout << name << " это чемпион!" << std::endl;
    return 0;
}