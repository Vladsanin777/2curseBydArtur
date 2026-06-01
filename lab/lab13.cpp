#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, m;

    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите количество столбцов: ";
    cin >> m;

    int A[100][100];

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "\nИсходный массив:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nМассив после удаления строк без четных элементов:\n";

    for (int i = 0; i < n; i++)
    {
        bool even = false;

        for (int j = 0; j < m; j++)
        {
            if (A[i][j] % 2 == 0)
            {
                even = true;
            }
        }

        if (even)
        {
            for (int j = 0; j < m; j++)
            {
                cout << A[i][j] << "\t";
            }
            cout << endl;
        }
    }

    return 0;
}
