#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
int main() {
    setlocale(LC_ALL, "Russian");

    std::string text;
    std::getline(std::cin, text);
    int c[256][256] = { 0 };

    for (int i = 0; i + 1 < text.length(); i++) {
        int c1 = (int)(text[i]);
        int c2 = (int)(text[i + 1]);
        c[c1][c2]++;
    }

    bool found = false;
    for (int i = 0; i < 256; i++) {
        for (int j = 0; j < 256; j++) {
            if (c[i][j] > 0) {
                std::cout << "\""
                        << (char)(i)
                        << (char)(j)
                        << "\" : "
                        << c[i][j] << " раз\n";
                found = true;
            }
        }
    }

    return 0;
}
