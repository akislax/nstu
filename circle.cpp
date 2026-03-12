#include <iostream>
#include <cmath>
#include <cassert>
#include <locale.h>

using namespace std;

const double PI = 3.14159265358979323846;

double circleLength(double r) {
    assert(r > 0);
    return 2 * PI * r;
}

double circleArea(double r) {
    assert(r > 0);
    return PI * r * r;
}

double sectorArea(double r, double angle) {
    assert(r > 0);
    assert(angle >= 0 && angle <= 360);
    return (angle / 360.0) * PI * r * r;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double r, angle;

    cout << "Введите радиус окружности: ";
    cin >> r;

    cout << "Длина окружности: " << circleLength(r) << endl;
    cout << "Площадь круга: " << circleArea(r) << endl;

    cout << "Введите угол сектора (в градусах): ";
    cin >> angle;

    cout << "Площадь сектора: " << sectorArea(r, angle) << endl;

    cin.ignore();
    cout << "Нажмите Enter для выхода...";
    cin.get();

    return 0;
}