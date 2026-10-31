#include <iostream>

using namespace std;

int main() {
    long long N;
    if (!(cin >> N) || N <= 0) return 1;

    long long product = 1;
    bool hasOdd = false;

    while (N > 0) {
        int digit = N % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = true;
        }
        N /= 10;
    }

    if (hasOdd) {
        cout << product << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
