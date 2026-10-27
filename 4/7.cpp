#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double v1, v2, v3, v4, v5;
    if (!(cin >> v1 >> v2 >> v3 >> v4 >> v5)) return 1;

    cout << v1 << endl;
    cout << fixed << setprecision(2) << v2 << endl;
    cout << setprecision(6) << v3 << endl;
    cout << setprecision(2) << v4 << endl;
    cout << setprecision(0) << v5 << endl;

    return 0;
}
