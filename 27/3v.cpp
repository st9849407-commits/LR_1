#include <iostream>

using namespace std;

const int DivideByZero = 111;

float internaldiv(float arg1, float arg2) {
    if (arg2 == 0.0) {
        throw DivideByZero;
    }
    return arg1 / arg2;
}

int main(void) {
    float r, a, b;
    
    while (cin >> a) {
        cin >> b;
        try {
            r = internaldiv(a, b);
            cout << r << endl;
        } 
        catch (int e) {
            if (e == DivideByZero) {
                cout << "Are you kidding me?" << endl;
                cout << "Your input is not valid, you can't divide by zero." << endl;
            }
        }
    }

    return 0;
}
