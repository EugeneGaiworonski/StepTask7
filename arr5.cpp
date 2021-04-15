// Задание 5: Дан массив: А[M] (M вводится с клавиатуры).
// Необходимо удалить из массива четные или нечетные значения.
// Пользователь вводит данные в массив, а также с помощью меню решает, что нужно удалить.


#include <iostream>
#include <vector>
#include <algorithm>

using std::cin; using std::cout; using std::vector;

void FillArray(vector<short>&, short); // заполнить массив случайными числами 1..100
void WriteArray(vector<short>&, short); // вывести массив на экран, разделитель пробел
void NewLine(); // переход на новую строку

int main()
{
    srand(33);
    int iM = 0;
    char cSelect = 0x0;
    cout << "Array size: "; cin >> iM;
    vector <short> wA(iM); // массив A[M]
    vector <short> wRez(0);
    NewLine();
    FillArray(wA,iM);
    cout << "Array A is: ";
    WriteArray(wA,iM);
    NewLine();
    cout << "Array A length is: " << wA.size();
    NewLine();
    cout << "1 - erase even, 2 - erase odd: ";cin >> cSelect;
    switch (cSelect) {
    case '1':
        for (short i = 0; i < wA.size(); i++) if ((wA[i] % 2) == 0) wRez.insert(wRez.end(), wA[i]);
        break;
    case '2':
        for (short i = 0; i < wA.size(); i++) if ((wA[i] % 2) != 0) wRez.insert(wRez.end(), wA[i]);
        break;
    default:
        break;
    }
    wA.clear();
    wA = wRez;
    NewLine();
    cout << "Fixed array A is: ";
    WriteArray(wA,wA.size());
    return 0;
}

void FillArray(vector<short> &wArr, short wLength)
{
    for (short i = 0; i < wLength; i++)
         wArr[i] = rand() % 100;
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


