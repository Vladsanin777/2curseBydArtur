#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return pow(x, 5) - 0.3 * abs(x - 1);
}

int main() {
    double a = 1, b = 10, eps = 1e-5, c;
    
    while ((b - a) / 2 > eps) {
        c = (a + b) / 2;
        if (f(a) * f(c) < 0) b = c;
        else a = c;
    }
    
    cout << "Koren: " << (a + b) / 2 << endl;
    return 0;
}
