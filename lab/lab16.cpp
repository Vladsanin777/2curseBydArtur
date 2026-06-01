#include <iostream>
#include <iomanip>

void printBinary(int num) {
    for (int byte = 3; byte >= 0; byte--) {
        for (int bit = 7; bit >= 0; bit--) {
            int shiftAmount = (byte * 8) + bit;
            std::cout << (char)('0' + ((num >> shiftAmount) & 0x01));
        }
        
        std::cout << ' ';
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    int num;
    std::cout << "Введите шестнадцатеричное число: ";
    std::cin >> std::hex >> num;

    std::cout << "Двоичный вид: ";
    printBinary(num);

    int highByte = (num >> 0x18) & 0xFF;
    int lowByte = num & 0xFF;

    num &= 0x00FFFF00;
    num |= lowByte << 0x18;
    num |= highByte;

    std::cout << "Результат: " << std::hex << num << std::endl;
    std::cout << "Двоичный вид: ";
    printBinary(num);

    return 0;
}
