#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    //четвертое задание
    int multiplier;
    cin >> multiplier;
    Matrix matr;
    matrix(&matr, &multiplier);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matr.a[i][j] << " ";
        }
        cout << endl;
    }
    matrix2(matr, multiplier);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matr.a[i][j] << " ";
        }
        cout << endl;
    }
    //первое второе задание
    double x;
    cin >> x;
    intturner(x);
    intturner2(x);
    signchange(&x);
    cout << x << endl;
    signchange2(x);
    cout << x << endl;

    //третье задание
    circle circle;
    circle.x = 1;
    circle.y = 5;
    double vector1 = 1, vector2 = 2;
    move(circle, vector1, vector2);
    cout << circle.x << " " << circle.y << endl;
    move2(&circle, &vector1, &vector2);
    cout<< circle.x << " " << circle.y << endl;

    return 0;
}