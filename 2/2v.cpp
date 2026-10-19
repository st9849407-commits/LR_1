#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    double x, y;

    cout << "=== Завдання 2 (Варіант 3) ===" << endl;
    cout << "Введіть координату x: ";
    cin >> x;
    cout << "Введіть координату y: ";
    cin >> y;

    // Перевірка належності точки заштрихованій області
    if (x >= -1 && x <= 0 && y >= -1 && y <= 1) {
        cout << "Точка (" << x << "; " << y << ") ПОПАДАЄ в заштриховану область." << endl;
    } else {
        cout << "Точка (" << x << "; " << y << ") НЕ попадає в заштриховану область." << endl;
    }

    return 0;
}
