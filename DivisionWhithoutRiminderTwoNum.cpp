// Пользователь вводит два целых числа. Необходимо вывести все целые числа, на которые оба введенных числа делятся без остатка.

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int userInputA = 0, userInputB;

    cout << "Введите два целых числа и скажу все числа на которые они делятся без остатка : ";

    while (true)
    {

        if (!(cin >> userInputA >> userInputB) || userInputA <= 0 || userInputB <= 0)
        {
            cout << "Число или цифра не могу быть отрицательным или равным 0, попробуйте ещё раз : ";
            continue;
        }

        // Если A > B
        int temp = 0;
        if (userInputA > userInputB)
        {
            temp = userInputA;
            userInputA = userInputB;
            userInputB = temp;
        }

        for (int i = userInputA; i <= userInputB; i++) {
            if (userInputA % i == 0 || userInputB % i == 0) {
                cout << "Данное число " << i << " делится на оба введенных числа без остатка" << endl;
            }

            if (i == userInputB) return 0;
        }        
    }
}

