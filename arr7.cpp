// Задание 7: Написать функцию, которая получает указатель на статический массив и его размер.
// Функция распределяет положительные, отрицательные и нулевые элементы в отдельные динамические массивы.


#include <iostream>

using namespace std;

void NewLine();
void PrintArray(int*, int);
void DisassembleArray(int*, int);

int main()
{
  NewLine();
  int iStArray[10] = {4, 5, 0, -3, -3, 2, -4, -2, -3, 0};
  // 0 0
  // -3 -4 -2 -3
  // 4 5 3 2
  int* piStArray = &iStArray[0];
  PrintArray(piStArray, 10);
  DisassembleArray(piStArray,10);
  return 0;
}

void NewLine()
{
  cout << '\n';
}

void DisassembleArray(int* iStArray, int iLength)
{
  int iNegQty = 0;
  int iZeroQty = 0;
  int iPosQty = 0;
  for (int i = 0; i < iLength; i++) {
      if (iStArray[i] > 0) iPosQty += 1;
      if (iStArray[i] == 0) iZeroQty += 1;
      if (iStArray[i] < 0) iNegQty += 1;
    }
  NewLine();
  cout <<"==0:"<< iZeroQty++ <<" <0:" << iNegQty++ << " >0:" << iPosQty++;;
  NewLine();
  int* iNegArray = new int[iNegQty];
  int* iZeroArray = new int[iZeroQty];
  int* iPosArray = new int[iPosQty];
  int iZ = 0; int iP = 0; int iN = 0;
  for (int i = 0; i < iLength; i++) {
      if (iStArray[i] > 0) {
          iPosArray[iP++] = iStArray[i];
          //iP++;
        }
      if (iStArray[i] == 0) {
          iZeroArray[iZ++] = iStArray[i];
          //iZ++;
        }
      if (iStArray[i] < 0) {
          iNegArray[iN++] = iStArray[i];
          //iN++;
        }
    }
  PrintArray(iNegArray, --iNegQty);
  PrintArray(iZeroArray, --iZeroQty);
  PrintArray(iPosArray, --iPosQty);
  delete[] iZeroArray;
  delete[] iPosArray;
  delete[] iNegArray;
}

void PrintArray(int* iArr, int iLength)
{
  NewLine();
  for (int i = 0; i < iLength; i++) {
      cout << iArr[i] << ' ';
    }
}
