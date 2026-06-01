#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x = 20.167;
    double y = 2.367;
    double z = 1.982;

    double a, b;

    a = (1 + cos(y)) / pow(tan(2 * z), 3) + 1;

    b = (sqrt(x + y * z) + sqrt(x - y * z)) / sqrt(x * z * y);

    cout << endl;
    cout << "Результаты для варианта 2:" << endl;
    cout << "a = " << fixed << setprecision(6) << a << endl;
    cout << "b = " << fixed << setprecision(6) << b << endl;

    return 0;
}
