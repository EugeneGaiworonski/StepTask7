// Задание3: Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры).
// Необходимо создать третий массив минимально возможного размера,
// в котором нужно собрать элементы обоих массивов.


#include <iostream>
#include <vector>
#include <algorithm>

using std::cin; using std::cout; using std::vector;

void FillArray(vector<short>&, short); // заполнить массив случайными числами 1..10
void WriteArray(vector<short>&, short); // вывести массив на экран, разделитель пробел
void NewLine(); // переход на новую строку

int main()
{
    srand(4);
    short wM = 0;
    short wN = 0;
    cout << "Array A size: "; cin >> wM;
    cout << "Array B size: "; cin >> wN;
    vector <short> wArrA(wM); // массив A[M]
    vector <short> wArrB(wN); // массив B[N]
    vector <short> wArrR(0);

    NewLine();
    FillArray(wArrA,wM);
    cout << "Array A is: ";
    WriteArray(wArrA,wM);
    NewLine();
    cout << "Array A length is: " << wArrA.size();

    NewLine();
    NewLine();
    FillArray(wArrB,wN);
    cout << "Array B is: ";
    WriteArray(wArrB,wN);
    NewLine();
    cout << "Array B length is: " << wArrB.size();

    for (short i = 0; i < wArrA.size();i++) wArrR.insert(wArrR.end(), wArrA[i]);
    for (short i = 0; i < wArrB.size();i++) wArrR.insert(wArrR.end(), wArrB[i]);


    NewLine();
    NewLine();
    cout << "Result array is: ";
    WriteArray(wArrR,wArrR.size());
    NewLine();
    cout << "Elements found: " << wArrR.size();



    return 0;
}

void FillArray(vector<short> &wArr, short wLength)
{
    for (short i = 0; i < wLength; i++)
         wArr[i] = rand() % 10;
}

void WriteArray(vector<short> &wArr, short wLength)
{
    for (short i = 0; i < wLength; i++)
        cout << wArr[i] << ' ';
}

void NewLine()
{
    cout <<"\n";
}


