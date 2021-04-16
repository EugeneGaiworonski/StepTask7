//Задание3:
// Написать функцию, которая вставляет в строку в указанную позицию заданный символ.


#include <iostream>
#include <string>
using namespace std;

void InsertChar(string &str, char ch, int pos)
{
  str.insert(pos, &ch);
}

int main()
{
  string str = "Example string for experiments";
  cout << str <<'\n';
  InsertChar(str,'e',5);
  cout << str;
  return 0;
}
