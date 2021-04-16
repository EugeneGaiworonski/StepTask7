// Задание 8:
// Дана  строка  символов.  Определить  количество  букв,  цифр  и  остальных  символов,
// присутствующих в строке.

#include <iostream>
#include <string>
using namespace std;
// цифры 48-57
// буквы 65-90 A-Z | 97-122  a-z |128-175 А-п | 224-241 р-ё

void PrintASCIITable()
{
  for (int i = 0x20; i < 0xFF; i++) {
      cout << i <<':'<<(char)i<<' ';
    }
}

int main()
{
  int chars = 0;
  int digits = 0;
  int other = 0;
  int ch = ' ';
  string str = "Exercise 8: Given a string of characters. Determine the number of letters, numbers and other characters present in the string.";
  cout << str << '\n';
  for (int i = 0; i < str.length(); i++) {
      ch = (int)str[i];
      if ((ch >= 48) && (ch <= 57)) digits++;
      else if ((ch >= 65) && (ch <= 90) || (ch >= 97) && (ch <= 122) || (ch >= 128) && (ch <= 175) || (ch >= 224) && (ch <= 241)) {
          chars ++;
        } else {other++;}

    }
  cout <<"\nDigits: "<< digits <<" Chars: " << chars <<" Other (with spaces!): " << other;
  return 0;
}

