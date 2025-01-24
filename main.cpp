#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    double a, b, c;

    cout << "Введите три положительных числа (a, b, c): ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {

        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "Треугольник существует." << endl;
        cout << "Площадь треугольника: " << area << endl;
    } else {
        cout << "Треугольник не существует." << endl;
    }

    return 0;
}
