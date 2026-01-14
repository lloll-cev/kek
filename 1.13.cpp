#include <iostream>

int main() {
    int num;
    
    // Ввод целого числа
    std::cout << "Введите целое число: ";
    std::cin >> num;
    
    // Вывод следующего и предыдущего числа
    std::cout << "Следующее за числом " << num << " число – " << num + 1 << "." << std::endl;
    std::cout << "Для числа " << num << " предыдущее число – " << num - 1 << "." << std::endl;}
