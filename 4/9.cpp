#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4;
    if (!(cin >> n1 >> n2 >> n3 >> n4)) return 1;

    if (n1 >= 1 && n1 <= 255 &&
        n2 >= 1 && n2 <= 255 &&
        n3 >= 1 && n3 <= 255 &&
        n4 >= 1 && n4 <= 255) {
        cout << n1 << "." << n2 << "." << n3 << "." << n4 << endl;
    } else {
        cout << "Incorrect IP address" << endl;
    }

    return 0;
}
