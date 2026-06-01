#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b;

    cout << "Введите катет a: ";
    cin >> a;
    cout << "Введите катет b: ";
    cin >> b;

    double c = sqrt(a * a + b * b);
    double S = (a * b) / 2.0;

    cout << fixed << setprecision(3);
    cout << "Гипотенуза c = " << c << endl;
    cout << "Площадь S = " << S << endl;

    return 0;
}
