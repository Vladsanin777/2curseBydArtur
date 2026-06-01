#include <iostream>
using namespace std;

int main() {
    setlocale (LC_ALL, "RU");
    int m, n, p;

    cout << "Введите количество строк и столбцов матрицы A: ";
    cin >> m >> n;

    cout << "Введите количество столбцов матрицы B: ";
    cin >> p;

    int A[10][10], B[10][10], C[10][10];

    cout << "Введите элементы матрицы A:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "Введите элементы матрицы B:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            cin >> B[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    cout << "\nМатрица A:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    cout << "\nМатрица B:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++)
            cout << B[i][j] << " ";
        cout << endl;
    }

    cout << "\nПроизведение матриц (A * B):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
