#include <iostream>
int main()
{  setlocale(LC_ALL,"");
   int a;
   std::cin >> a;
   std::wcout<< a << L" - вот какое число ВЫ ввели"<< std::endl;
}