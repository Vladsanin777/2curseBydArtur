#include <iostream>

using namespace std;

int main() {
    const int MAX_M = 100;
    const int MAX_N = 100;

    int M, N;
    cout << "Введите количество строк и столбцов матрицы A: ";
    cin >> M >> N;

    int A[MAX_M][MAX_N];
    int B[MAX_N];
    
    // Проверка размеров
    if (M > MAX_M || N > MAX_N) {
        cout << "Превышен максимальный размер массива!" << endl;
        return 1;
    }

    cout << "Введите элементы матрицы A (" << M << "x" << N << "):\n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Введите массив B из " << N << " элементов: ";
    for (int j = 0; j < N; ++j) {
        cin >> B[j];
    }

    int C;
    cout << "Введите число C: ";
    cin >> C;

    // Поиск строк, совпадающих с B
    cout << "\nНомера строк, совпадающих с массивом B: ";
    bool found = false;
    for (int i = 0; i < M; ++i) {
        bool match = true;
        for (int j = 0; j < N; ++j) {
            if (A[i][j] != B[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            cout << i + 1 << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "нет таких строк";
    }
    cout << endl;

    // Умножение последнего столбца на C
    for (int i = 0; i < M; ++i) {
        A[i][N - 1] = A[i][N - 1] * C;
    }

    // Вывод изменённой матрицы
    cout << "\nМатрица A после умножения последнего столбца на " << C << ":\n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
