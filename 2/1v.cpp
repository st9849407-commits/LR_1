#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = -2;
    double a = 3;   
    double b = 2;  
    double y;

    if (x <= 0) {
        y = pow(x, 3) + a / b;
    }
    else if (x == 0) {
        y = sin(a / b) + 4 * b * x;
    }
    else {
        y = sqrt(x) + a / b;
    }
    cout << "y = " << y << endl;
    return 0;
}
