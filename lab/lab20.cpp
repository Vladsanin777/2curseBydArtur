#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (*(arr + i) == *(arr + i + 1)) {
            count++;
        }
    }

    cout << "Количество пар соседних одинаковых элементов: " << count << endl;

    delete[] arr;

    return 0;
}
