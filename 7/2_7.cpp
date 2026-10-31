#include <iostream>

using namespace std;

int main(void) {
    double pi4 = 0.0;
    long n;

    if (!(cin >> n) || n <= 0) return 1;

    double sign = 1.0;
    for (long i = 0; i < n; i++) {
        pi4 += sign / (2 * i + 1);
        sign = -sign;
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}
