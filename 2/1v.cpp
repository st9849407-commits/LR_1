#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Встановлюємо українську мову в консолі
    setlocale(LC_ALL, "Ukrainian");

    double x, a, b, Y;

    cout << "=== Завдання 1 (Варіант 3) ===" << endl;
    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b (не має дорівнювати 0): ";
    cin >> b;

    // Перевірка ділення на нуль
    if (b == 0) {
        cout << "Помилка: ділення на нуль (b = 0)!" << endl;
        return 1;
    }

    // Обчислення значення Y залежно від x
    if (x < 0) {
        Y = pow(x, 3) + (a / b);
    } else if (x == 0) {
        Y = sin(a / b) + 4 * b * x;
    } else { // x > 0
        Y = sqrt(x) + (a / b);
    }

    cout << "Результат Y = " << Y << endl;

    return 0;
}
