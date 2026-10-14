#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 10.0;
    double b = 0.5;
    double y;

    y = (0.314 * exp(a) - 0.512 * exp(b)) / sin((b / 3.0) * M_PI) * log(a);

    cout << y;

    return 0;
}
