#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, length, sum = 0;

    cout << "Введите натуральное число n: ";
    cin >> n;

    temp = n;
    length = 0;
    while (temp > 0) {
        length++;
        temp /= 10;
    }

    temp = n;
    for (int pos = 1; pos <= length; pos++) {
        int digit = temp / (int)pow(10, length - pos) % 10;
        if (pos % 2 == 1) {       // нечетная позиция (слева)
            sum += digit;
        }
    }

    cout << "Сумма цифр на нечетных позициях: " << sum << endl;

    return 0;
}
