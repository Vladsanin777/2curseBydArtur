#include <iostream>
#include <cmath>

using namespace std;

int countDigits(int n) {
    int number = abs(n);
    
    if (number == 0) {
        return 1;
    }
    
    int digits = 0;
    while (number > 0) {
        digits++;
        number /= 10;
    }
    return digits;
}

int main() {
    int n;
    
    cout << "Введите количество чисел в последовательности: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Ошибка: количество чисел должно быть положительным!" << endl;
        return 1;
    }
    
    int maxDigits = 0;
    int maxNumber = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Введите число " << i + 1 << ": ";
        cin >> x;
        
        int digits = countDigits(x);
        
        if (digits > maxDigits) {
            maxDigits = digits;
            maxNumber = x;
        }
    }
    
    cout << "\nРезультат:" << endl;
    cout << "Число с максимальным количеством цифр: " << maxNumber << endl;
    cout << "Количество цифр в нем: " << maxDigits << endl;
    
    return 0;
}
