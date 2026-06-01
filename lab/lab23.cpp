#include <iostream>
using namespace std;

template <typename T>
int countZeroCols(T** A, int M, int N) {
    int cnt = 0;
    for (int j = 0; j < N; j++)
        for (int i = 0; i < M; i++)
            if (A[i][j] == 0) { cnt++; break; }
    return cnt;
}

template <typename T>
int longestSeriesRow(T** A, int M, int N) {
    int maxLen = 0, bestRow = 0;
    for (int i = 0; i < M; i++) {
        int len = 1;
        for (int j = 1; j < N; j++) {
            if (A[i][j] == A[i][j-1]) len++;
            else len = 1;
            if (len > maxLen) { maxLen = len; bestRow = i; }
        }
    }
    return bestRow;
}

int main() {
    int M, N;
    cin >> M >> N;
    int** A = new int*[M];
    for (int i = 0; i < M; i++) {
        A[i] = new int[N];
        for (int j = 0; j < N; j++)
            cin >> A[i][j];
    }
    
    cout << countZeroCols(A, M, N) << endl;
    cout << longestSeriesRow(A, M, N) + 1 << endl;
    
    for (int i = 0; i < M; i++) delete[] A[i];
    delete[] A;
    return 0;
}
