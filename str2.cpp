// Задание 2:
// Написать функцию, которая удаляет из строки все вхождения в нее заданного символа.


#include <iostream>
#include <string>
using namespace std;

void DelChar(string &str, char ch)
{
  for (int i = 0; i < str.length(); i++)
      if (str[i] == ch) str.erase(i,1);
}

int main()
{
  string str = "Example string for experiments";
  cout << str <<'\n';
  DelChar(str,'e');
  cout << str;
  return 0;
}

