// Задание 10: Дана строка символов.
// Необходимо проверить является ли эта строка палиндромом.


#include <iostream>
#include <string>
using namespace std;
#define SPACE ' '

bool IsPalindrome(string st)
{
  bool bRezult = false;
  if (st.length() % 2 == 0) {
      for (int i = 0; i < st.length() / 2; i++)
        if (st[i] != st[st.length()-i]) bRezult = true;
    }
  return bRezult;
 }

int main()
{
  string str1 = "sum summus mus"; // true = 1
  string str2 = "simple text"; // false = 0
  cout << IsPalindrome(str1) << ' ' << IsPalindrome(str2);
  return 0;
}

