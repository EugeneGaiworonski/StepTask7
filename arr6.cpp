// Задание 6: Написать функцию, которая получает указатель на динамический массив и его размер.
// Функция должна удалить из массива
// все простые числа и вернуть указатель на новый динамический массив.


#include <iostream>

using namespace std;

bool IsPrime(int);
int* DelSimple(int*, int&);
void NewLine();

int main()
{
    srand(14);
    int iN = 0;
    cout <<"Array size: ";cin >> iN;
    int* iAr = new int[iN];
    //int* pAr = nullptr;
    for(int i = 0; i < iN; i++) iAr[i] = rand() % 10;
    for(int i = 0; i < iN; i++) cout<< iAr[i] << " ";
    iAr = DelSimple(iAr, iN);
    NewLine();
    NewLine();
    for(int i = 0; i < iN; i++) cout<< iAr[i] << " ";
    delete[] iAr;
    return 0;
}

int* DelSimple(int* iArr, int &iLength)
{
  int* pArr =  iArr;
  int iNewLength = iLength;
  for (int i = 0; i < iLength; i++) {
      if (IsPrime(iArr[i])) {
          for (int j = i+1; j < iLength; j++) iArr[j-1] =iArr[j];
          iNewLength--;
        }
    }
  iLength = iNewLength;
  return pArr;
}

void NewLine()
{
  cout << '\n';
}
bool IsPrime(int n)
{
  if(n==1) // 1 - не простое число
    return false;
  for(int d=2; d*d <= n; d++) { // перебираем возможные делители от 2 до sqrt(n)
    if(n % d == 0) // если разделилось нацело, то составное
    return false;
  }
  return true; // если нет нетривиальных делителей, то простое
}
