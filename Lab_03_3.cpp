// Lab_03_3.cpp
// Бірбан Денис
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 3

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double Pi = 4 * atan(1.); // число пі

    double R; // вхідний параметр (0 < R <= 3)
    double x; // вхідний аргумент
    double y; // результат обчислення виразу

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x <= -7 - R)
        y = R;                                    // пряма y = R
    else if (x <= -7 + R)
        y = R - sqrt(R * R - (x + 7) * (x + 7));  // нижня дуга кола
    else if (x <= -4)
        y = R;                                    // пряма y = R
    else if (x < 0)
        y = -R * x / 4;                           // пряма через (-4;R),(0;0)
    else if (x <= Pi)
        y = sin(x);                               // синусоїда
    else
        y = x - Pi;                               // пряма під кутом 45°

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}