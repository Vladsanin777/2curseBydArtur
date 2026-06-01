#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {5, -3, 7, -1, 0, 4, -8, 2, -6, 9};

    int positiveCount = 0;
    int negativeCount = 0;

    // Вывод массива
    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
        
        if (arr[i] > 0)
            positiveCount++;
        else if (arr[i] < 0)
            negativeCount++;
    }

    cout << endl;

    // Вывод результатов
    cout << "Количество положительных чисел: " << positiveCount << endl;
    cout << "Количество отрицательных чисел: " << negativeCount << endl;

    return 0;
}
