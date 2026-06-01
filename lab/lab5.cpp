#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    double r1 = 1.0, r2 = 2.0;
    double dist = sqrt(x * x + y * y);

    if (dist >= r1 && dist <= r2 && y >= 0) {
        cout << "Попадает" << endl;
    } else {
        cout << "Не попадает" << endl;
    }

    return 0;
}
