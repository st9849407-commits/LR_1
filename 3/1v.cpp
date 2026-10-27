#include <iostream>

using namespace std;

int main() {
    int N;
    if (!(cin >> N) || N < 100 || N > 999) return 1;

    int digit1 = N / 100;
    int digit2 = (N / 10) % 10;
    int digit3 = N % 10;

    int product = 1;
    bool hasOdd = false;

    if (digit1 % 2 != 0) { product *= digit1; hasOdd = true; }
    if (digit2 % 2 != 0) { product *= digit2; hasOdd = true; }
    if (digit3 % 2 != 0) { product *= digit3; hasOdd = true; }

    if (hasOdd) {
        cout << product << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
