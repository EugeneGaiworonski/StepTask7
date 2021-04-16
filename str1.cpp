// Задание 1:
// Написать функцию, которая удаляет из строки символ с заданным номером.


#include <iostream>
#include <string>
using namespace std;

void DelChar (string &str, int pos)
{
  str.erase(pos,1);
}

int main()
{
  string str = "Sample string";
  cout << str <<'\n';
  DelChar(str,3);
  cout << str;
  return 0;
}

