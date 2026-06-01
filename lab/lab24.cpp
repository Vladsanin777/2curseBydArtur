#include <iostream>
#include <cmath>
using namespace std;

double f1(double x) {
    return 2 * tan(x) - 1 / tan(x);
}

double f2(double x) {
    return 1 / cbrt(x + sqrt(x));
}

double derivative(double (*f)(double), double x, double h = 1e-6) {
    return (f(x + h) - f(x - h)) / (2 * h);
}

double second_derivative(double (*f)(double), double x, double h = 1e-6) {
    return (f(x + h) - 2 * f(x) + f(x - h)) / (h * h);
}

int main() {
    double x;
    cin >> x;

    cout << derivative(f1, x) << endl;
    cout << second_derivative(f1, x) << endl;
    cout << derivative(f2, x) << endl;
    cout << second_derivative(f2, x) << endl;

    return 0;
}
