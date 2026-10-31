#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, h;
    if (!(cin >> a >> b >> h)) return 1;

    double x = a;
    while (x <= b) {
        double sinVal = sin(x);
        if (sinVal < 0) {
            cout << "x = " << x << " Out of domain (ODZ error)" << endl;
            break;
        }
        double y = sqrt(sinVal) + x * x;
        cout << "X: " << x << " | Y: " << y << endl;
        x += h;
    }

    return 0;
}
