#include <iostream>

void printBinary(int num) {

    for (int i = 15; i >= 0; i--) {
        std::cout << ((num >> i) & 1);
        if (i % 4 == 0 && i != 0) std::cout << ' ';
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    int num;
    std::cout << "Введите целое число (0..65535): ";
    std::cin >> num;

    num = num & 0xFFFF;

    std::cout << "Исходное число: " << num << std::endl;
    std::cout << "Двоичный вид: ";
    printBinary(num);

    int highByte = (num >> 8) & 0xFF;
    int lowByte = num & 0xFF;

    int result = (lowByte << 8) | highByte;

    std::cout << "Результат: " << result << std::endl;
    std::cout << "Двоичный вид: ";
    printBinary(result);

    return 0;
}
