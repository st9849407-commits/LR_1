#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    for (int i = 0; i < 5; i++) {
        if (!(cin >> x)) return 1;
        y = pow(sin(x), 5) + fabs(5 * x - 1.5);
        cout << y << endl;
    }
    return 0;
}
