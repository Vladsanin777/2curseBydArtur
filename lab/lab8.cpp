#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x = 0.1;
    double epsilon = 1e-4;
    
    int n = 1;
    double term = x;
    double sum = term;
    
    while (fabs(term) >= epsilon) {
        n++;
        term = -term * x * x * (2.0 * n - 3.0) / (2.0 * n - 1.0);
        sum += term;
    }
    
    cout << fixed << setprecision(6);
    cout << "Сумма ряда: " << sum << endl;
    cout << "Число членов ряда: " << n << endl;
    cout << "Контрольное значение arctan(" << x << "): " << atan(x) << endl;
    
    return 0;
}
