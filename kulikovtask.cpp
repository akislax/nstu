#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    int b;
    int c; 
    double perimeter;
    double semi_perimetr;
    cout << "Введите длину сторон треугольника: " << endl;
    cin >> a >> b >> c;
    if ((a+b > c) && (b+c > a) && (a+c > b)){
        perimeter = a + b + c;
        semi_perimetr = 0.5 * perimeter;
    
    cout << "Периметр = " << perimeter << endl;
    int herons_area = sqrt(semi_perimetr*(semi_perimetr-a)*(semi_perimetr-b)*(semi_perimetr-c));
    cout <<"Площадь по формуле Герона = " << herons_area << endl;
    if ((a == b) || (a == c) || (b == c)){
        cout << "Треугольник равнобедренный" << endl;
    }else{
        cout << "Треугольник не равнобедренный" << endl;
    }
    }else{
        cout << "Такого треугольника не существует" <<endl; 
    }   
    return 0;
}