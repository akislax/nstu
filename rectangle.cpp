#include <cassert>
#include <iostream>
#include <cmath>

using namespace std;

static float perimetr (float height, float width) {
    return 2*(height+width);
}

static float square (float height, float width) {
    return height*width;
}

static double diagonalLenght(float height, float width) {
    return sqrt(pow(height,2) + pow(width,2));
}

int main() {
    float height = 0;
    cout << "Введите высоту прямоугольника: ";
    cin >> height;
    assert(height > 0);
    float width = 0;
    cout << "Введите ширину прямоугольника: ";
    cin >> width;
    assert(width > 0);
    cout << "Для прямоугольника с высосотой " << height << " и шириной " << width << " параметры равны:" <<  endl;
    cout << "Периметр: " << perimetr(height, width) << endl;
    cout << "Площадь: " << square(height, width) << endl;
    cout << "Длина диагонали: " << diagonalLenght(height, width);
    return 0;
}

/* fgfgf gggg */