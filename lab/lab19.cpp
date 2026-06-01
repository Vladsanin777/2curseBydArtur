#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

struct Student {
    string fio;
    int exams[10];
    bool credits[10];
    int nEx, nCr;
};

bool passed(const Student& s) {
    for (int i = 0; i < s.nEx; i++) 
        if (s.exams[i] < 3) return false;
    for (int i = 0; i < s.nCr; i++) 
        if (!s.credits[i]) return false;
    return true;
}

int main() {
    setlocale(LC_ALL, "ru");

    Student group[MAX];
    int n;

    cout << "Количество студентов: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        Student& s = group[i];
        cout << "\nСтудент " << i + 1 << ":\nФИО: ";
        getline(cin, s.fio);

        cout << "Экзамены (кол-во): "; cin >> s.nEx;
        cout << "Оценки: ";
        for (int j = 0; j < s.nEx; j++) cin >> s.exams[j];

        cout << "Зачёты (кол-во): "; cin >> s.nCr;
        cout << "Результаты (1/0): ";
        for (int j = 0; j < s.nCr; j++) {
            int x; cin >> x; s.credits[j] = x;
        }
        cin.ignore();
    }

    int k = 0;
    for (int i = 0; i < n; i++) {
        if (passed(group[i])) {
            group[k++] = group[i];
        }
    }

    cout << "\n=== Сдавшие сессию ===\n";
    for (int i = 0; i < k; i++) {
        cout << group[i].fio << endl;
    }

    cout << "Всего: " << k << endl;
    return 0;
}
