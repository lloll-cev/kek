#include <iostream>
int main()
{  setlocale(LC_ALL,"");
   int a;
   std::cin >> a;
   std::wcout<<L"Вы ввели число: " << a << std::endl;
}