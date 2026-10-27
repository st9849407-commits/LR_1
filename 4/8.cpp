#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1, num2;
    if (!(cin >> num1 >> num2)) return 1;

    if (num1 == 0 || num2 == 0) return 1;

    double val1 = 1.0 / num1;
    double val2 = 1.0 / num2;

    const double epsilon = 0.000001;

    if (fabs(val1 - val2) < epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }

    return 0;
}
