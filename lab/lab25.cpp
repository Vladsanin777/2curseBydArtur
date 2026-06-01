#include <iostream>
#include <vector>

using namespace std;

double det3x3(double m[3][3]) {
    return m[0][0] * (m[1][1] * m[2][2] - m[1][2] * m[2][1]) -
           m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0]) +
           m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]);
}

double det4x4(const vector<vector<double>>& matrix) {
    double det = 0;
    double submatrix[3][3];

    for (int c = 0; c < 4; c++) {
        int subi = 0;
        for (int i = 1; i < 4; i++) {
            int subj = 0;
            for (int j = 0; j < 4; j++) {
                if (j == c) continue;
                submatrix[subi][subj] = matrix[i][j];
                subj++;
            }
            subi++;
        }
        double sign = (c % 2 == 0) ? 1.0 : -1.0;
        det += sign * matrix[0][c] * det3x3(submatrix);
    }
    return det;
}

int main() {
    vector<vector<double>> A(4, vector<double>(4));
    vector<double> B(4);

    cout << "Введите коэффициенты матрицы A (4 строки по 4 числа):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Введите свободные члены B (4 числа):" << endl;
    for (int i = 0; i < 4; i++) {
        cin >> B[i];
    }

    double delta = det4x4(A);
    cout << "\nГлавный определитель (Delta) = " << delta << endl;

    if (abs(delta) < 1e-9) {
        cout << "Главный определитель равен 0. Метод Крамера применить нельзя." << endl;
        return 0;
    }

    double x[4];
    for (int i = 0; i < 4; i++) {
        vector<vector<double>> tempA = A;

        for (int j = 0; j < 4; j++) {
            tempA[j][i] = B[j];
        }
        double delta_i = det4x4(tempA);
        cout << "Delta_" << i + 1 << " = " << delta_i << endl;
        x[i] = delta_i / delta;
    }

    cout << "\nРешение системы:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }

    return 0;
}
