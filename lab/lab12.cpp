#include <iostream>
using namespace std;

int comparisons = 0;
int swaps = 0;
int passes = 0;

void insertionSort(int arr[], int n) {
    comparisons = swaps = passes = 0;

    for (int i = 1; i < n; i++) {
        passes++;
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            comparisons++;
            arr[j + 1] = arr[j];
            swaps++;
            j--;
        }
        if (j >= 0) comparisons++;
        arr[j + 1] = key;
    }
}

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        comparisons++;
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        }
        else {
            arr[k++] = R[j++];
            swaps++;
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        passes++;
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    int arr[] = { 5, 2, 9, 1, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Исходный массив: ";
    printArray(arr, n);

    int arr1[6];
    for (int i = 0; i < n; i++) arr1[i] = arr[i];

    insertionSort(arr1, n);
    cout << "\nСортировка вставками: ";
    printArray(arr1, n);
    cout << "Проходов: " << passes << endl;
    cout << "Сравнений: " << comparisons << endl;
    cout << "Перестановок: " << swaps << endl;

    int arr2[6];
    for (int i = 0; i < n; i++) arr2[i] = arr[i];

    comparisons = swaps = passes = 0;
    mergeSort(arr2, 0, n - 1);
    cout << "\nСортировка слиянием: ";
    printArray(arr2, n);
    cout << "Проходов: " << passes << endl;
    cout << "Сравнений: " << comparisons << endl;
    cout << "Перестановок: " << swaps << endl;

    return 0;
}
