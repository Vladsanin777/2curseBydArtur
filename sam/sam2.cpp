#include <iostream>
using namespace std;

int main() {
    int age;
    
    cout « "Введите возраст: ";
    cin » age;
    
    if (age < 0 || age > 120) {
        cout « "Ошибка: некорректный возраст" « endl;
        return 1;
    }
    
    int group;
    
    if (age >= 0 && age <= 6) group = 1;
    else if (age >= 7 && age <= 17) group = 2;
    else if (age >= 18 && age <= 59) group = 3;
    else group = 4;
    
    switch (group) {
        case 1:
            cout « "Дошкольник" « endl;
            break;
        case 2:
            cout « "Учащийся" « endl;
            break;
        case 3:
            cout « "Работающий" « endl;
            break;
        case 4:
            cout « "Пенсионер" « endl;
            break;
    }
    
    return 0;
}
