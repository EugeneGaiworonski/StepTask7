// Задание 9: Подсчитать количество слов во введенном предложении.

#include <iostream>
#include <string>
using namespace std;
#define SPACE ' '

int main()
{
  string str;
  int iWordQty = 0;
  getline(cin,str);

  for (int i = 0; i < str.length(); i++) if (str[i] == SPACE) iWordQty++;
  iWordQty++;
  cout <<"\n Words: "<< iWordQty;
  return 0;
}

