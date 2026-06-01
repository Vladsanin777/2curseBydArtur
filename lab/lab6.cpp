#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int n = 10;
    double S = 0.0;
    long long fact = 1; 
    
    cout << "Программа вычисления суммы ряда S = sum(1/k!, k=1..n)" << endl;
    cout << "Значение n = " << n << endl << endl;
    
    cout << "k\tk!\t\t1/k!\t\tТекущая сумма S" << endl;
    cout << "--------------------------------------------------------" << endl;

    for (int k = 1; k <= n; k++) {
        fact *= k;  
        double term = 1.0 / fact; 
        S += term; 
        cout << k << "\t" << fact << "\t" 
             << fixed << setprecision(10) << term << "\t" 
             << S << endl;
    }
    
    cout << "\n" << string(50, '=') << endl;
    cout << "ФИНАЛЬНЫЙ РЕЗУЛЬТАТ:" << endl;
    cout << "Сумма ряда S = sum(1/k!, k=1.." << n << ") = " 
         << fixed << setprecision(15) << S << endl;
    cout << "Приближение к (e - 1) = " << S << endl;
    cout << "(Точное значение e - 1 = 1.718281828459045)" << endl;
    
    return 0;
}
