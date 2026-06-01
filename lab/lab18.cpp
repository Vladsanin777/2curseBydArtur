#include <iostream>
#include <fstream>

using namespace std;

void copyFile(const string& sourceName, const string& destName) {
    ifstream inFile(sourceName, ios::binary);
    ofstream outFile(destName, ios::binary);

    if (inFile.is_open() && outFile.is_open()) {
        char ch;
        while (inFile.get(ch)) {
            outFile.put(ch);
        }
    }
    inFile.close();
    outFile.close();
}

int main() {
    const string f = "f.txt";
    const string g = "g.txt";
    const string h = "h.txt";

    copyFile(g, h);

    copyFile(f, g);

    copyFile(h, f);

    cout << "Файлы успешно обменялись содержимым!" << endl;

    return 0;
}
