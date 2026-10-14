// Lab_03_4.cpp
// Бірбан Денис
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 3

#include <iostream>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // вхідний аргумент
    double R; // вхідний параметр

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі:
    // квадрат [-R; R] x [-R; R] без кругів з центрами (-R; R) та (R; -R)
    if (-R <= x && x <= R && -R <= y && y <= R &&
        (x + R) * (x + R) + (y - R) * (y - R) >= R * R &&
        (x - R) * (x - R) + (y + R) * (y + R) >= R * R)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    return 0;
}