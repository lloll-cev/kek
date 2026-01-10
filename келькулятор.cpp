#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;
    char choice;
    
    do {
        cout << "\n=== КАЛЬКУЛЯТОР ===\n";
        
        // Ввод данных
        cout << "Введите первое число: ";
        cin >> num1;
        
        cout << "Введите операцию (+, -, *, /): ";
        cin >> operation;
        
        cout << "Введите второе число: ";
        cin >> num2;
        
        // Вычисления
        switch(operation) {
            case '+':
                cout << "Результат: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Результат: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Результат: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if(num2 != 0) {
                    cout << "Результат: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << "Ошибка: деление на ноль невозможно!" << endl;
                }
                break;
            default:
                cout << "Ошибка: неподдерживаемая операция!" << endl;
                break;
        }
        
        // Спросить, хочет ли пользователь продолжить
        cout << "\nХотите выполнить еще вычисление? (y/n): ";
        cin >> choice;
        
    } while(choice == 'y' || choice == 'Y');
    
    cout << "Спасибо за использование калькулятора!" << endl;
    
    return 0;
}