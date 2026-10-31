#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введіть розмір масиву: ";
    if (!(cin >> n) || n <= 0) return 1;

    int arr[100]; // Припускаємо розмір до 100
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Знаходимо індекс першого максимального елемента
    int maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIdx]) {
            maxIdx = i;
        }
    }

    // Замінюємо нулями від'ємні елементи, що передують першому максимуму
    for (int i = 0; i < maxIdx; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Результат: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
