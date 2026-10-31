#include <iostream>

using namespace std;

int main() {
    long long product = 1;
    for (int i = 4; i < 40; i += 4) {
        product *= i;
    }
    cout << product << endl;
    return 0;
}
