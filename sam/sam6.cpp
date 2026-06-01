#include <iostream>
#include <functional>

using namespace std;

void processArray(int arr[], int size, const function<void(int)>& func) {
    for (int i = 0; i < size; i++) {
        func(arr[i]);
    }
}

int main() {
Setlocale(LC_ALL, "Ru");
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout « "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        cout « numbers[i] « " ";
    }
    cout « "\n\n";

    cout « "Первый вызов (3x + x^2):" « endl;
    processArray(numbers, size, [](int x) {
        int result = 3 * x + x * x;
        cout « "f(" « x « ") = " « result « endl;
    });

    cout « "\n";

    cout « "Второй вызов (8x^2 - 5x):" « endl;
    processArray(numbers, size, [](int x) {
        int result = 8 * x * x - 5 * x;
        cout « "g(" « x « ") = " « result « endl;
    });

    return 0;
}
