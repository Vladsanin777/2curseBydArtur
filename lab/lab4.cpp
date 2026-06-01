#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    
    double a = 0, b = 3;
    double x = a;
    double delta = 0.1;
    double y1, y2, y3;
    
    label:
    y1 = 1;
    y2 = 2 * pow(x, -0.5) * log(x);
    y3 = x * cos(2 * x);
    
    if (x < 1) {
        cout << "Корень 1: " << y1 << endl;
    }
    if (1 <= x && x <= 2) { 
        cout << "Корень 2: " << y2 << endl;
    }
    if (x > 2) {
        cout << "Корень 3: " << y3 << endl;
    }
    
    if (x < b) {
        x += delta;
        goto label;
    }
    
    return 0;
}
