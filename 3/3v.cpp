#include <iostream>

using namespace std;

int main() {
    double x, y;
    if (!(cin >> x >> y)) return 1;

    bool condition1 = (x >= -1 && x <= 0 && y >= 0 && y <= 1);
    bool condition2 = (x >= 0 && x <= 1 && y >= -1 && y <= 0);

    if (condition1 || condition2) {
        cout << "Потрапляє" << endl;
    } else {
        cout << "Не потрапляє" << endl;
    }

    return 0;
}
