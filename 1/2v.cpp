#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 1.0;
    double b = 12.21;
    double y;

    y = (0.81 * cbrt(a) - (1.0 / 2.125) * cbrt(b)) * exp(a);

    cout << y;

    return 0;
}
