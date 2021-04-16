// Задание 4:
// Написать  программу,  которая  заменяет  все  символы  точки  "."  в  строке,
// введенной пользователем, на символы восклицательного знака "!".
#include <iostream>
#include <string>
using namespace std;

void ReplaceDot(string &str)
{
  for (int i = 0; i < str.length(); i++)
      if (str[i] == '.') str[i] ='!';
}

int main()
{
  string str = "Example. string .for. experiments.";
  cout << str <<'\n';
  ReplaceDot(str);
  cout << str;
  return 0;
}

