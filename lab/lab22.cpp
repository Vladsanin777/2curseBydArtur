#include <iostream>
#include <cmath>

using namespace std;

int b(int n) {
    if (n == 1) return -10;
    if (n == 2) return 2;
    return abs(b(n - 2)) - 6 * b(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << b(n) << endl;
    return 0;
}
