#include <iostream>
using namespace std;

int main() {
    int total_seconds;

    cout << "Введите количество секунд с начала суток (0 - 86399): ";
    cin >> total_seconds;

    if (total_seconds < 0 || total_seconds > 86399) {
        cout << "Ошибка: количество секунд должно быть от 0 до 86399" << endl;
        return 1;
    }

    int hours = total_seconds / 3600;
    int remainder = total_seconds % 3600;
    int minutes = remainder / 60;
    int seconds = remainder % 60;

    cout << "Текущее время: ";

    if (hours < 10) cout << "0";
    cout << hours << ":";

    if (minutes < 10) cout << "0";
    cout << minutes << ":";

    if (seconds < 10) cout << "0";
    cout << seconds << endl;

    return 0;
}
