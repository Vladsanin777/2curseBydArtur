#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int N, M;
    cout << "Введите количество строк N и столбцов M: ";
    cin >> N >> M;

    int** A = new int* [N];
    for (int i = 0; i < N; i++) {
        A[i] = new int[M];
    }
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    bool* del = new bool[N];
    for (int i = 0; i < N; i++) {
        del[i] = false;
    }

    for (int i = 0; i < N; i++) {
        bool hasEven = false;
        for (int j = 0; j < M; j++) {
            if (A[i][j] % 2 == 0) {
                hasEven = true;
                break;
            }
        }
        if (!hasEven) {
            del[i] = true;
        }
    }
    int new_N = 0;
    for (int i = 0; i < N; i++) {
        if (!del[i]) {
            new_N++;
        }
    }
    if (new_N == 0) {
        cout << "\nМассив пуст (все строки удалены).\n";
    }
    else {
        int** B = new int* [new_N];
        for (int i = 0; i < new_N; i++) {
            B[i] = new int[M];
        }

        int rowIndex = 0;
        for (int i = 0; i < N; i++) {
            if (!del[i]) {
                for (int j = 0; j < M; j++) {
                    B[rowIndex][j] = A[i][j];
                }
                rowIndex++;
            }
        }
        cout << "\nМассив после удаления строк без четных элементов:\n";
        for (int i = 0; i < new_N; i++) {
            for (int j = 0; j < M; j++) {
                cout << B[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < new_N; i++) {
            delete[] B[i];
        }
        delete[] B;
    }

    
    return 0;
}
