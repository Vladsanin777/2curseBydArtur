#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int N = 30;
    double P = 1.0;
    
    std::cout << "Вычисление произведения a_k для k=1.." << N << std::endl;
    std::cout << "k\ta_k" << std::endl;
    
    for (int k = 1; k <= N; k++) {
        double a;
        
        if (k < 6) {
            a = pow(sin(k), 2) + cos(k);
        } else if (k <= 10) {
            a = 0.0;
        } else {
            a = pow(cos(k), 2) + sin(k);
        }
        
        std::cout << k << "\t" << std::fixed << std::setprecision(6) << a << std::endl;
        
        P *= a;
    }
    
    std::cout << "\nРезультат произведения P = " << P << std::endl;
    
    return 0;
}
