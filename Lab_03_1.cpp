// Lab_03_1.cpp
// Бірбан Денис
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 3

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // функціонально стала частина виразу
    double B; // функціонально змінна частина виразу

    cout << "x = "; cin >> x;

    A = 2 / x + fabs(x);

    // спосіб 1: розгалуження в скороченій формі
    if (x < 0)
        B = 1 + 4 * x * x;
    if (0 <= x && x <= 2)
        B = pow(exp(x) + fabs(x), 2);
    if (x > 2)
        B = 5 * sin(x * x + 1);

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // спосіб 2: розгалуження в повній формі
    if (x < 0)
        B = 1 + 4 * x * x;
    else
        if (x > 2)
            B = 5 * sin(x * x + 1);
        else
            B = pow(exp(x) + fabs(x), 2);

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}