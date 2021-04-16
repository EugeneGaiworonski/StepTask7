// Задание7: Дана строка символов. Заменить в ней все пробелы на табуляции.

#include <iostream>
#include <string>
using namespace std;
#define SPACE ' '
#define TAB '\t'

int main()
{

  string str = "A character string is given. Replace all spaces in it with tabs.";
  cout <<"\n"<< str;
  for (int i = 0; i < str.length(); i++) if (str[i] == SPACE) str[i] = TAB;
  cout <<"\n"<< str;
  return 0;
}

