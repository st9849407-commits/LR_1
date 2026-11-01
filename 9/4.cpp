#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int n = 10;
    int arr[10];

    cout << "Масив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 50;
        cout << arr[i] << " ";
    }
    cout << endl;

    int A;
    cout << "Введіть число A: ";
    if (!(cin >> A)) return 1;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > A) {
            count++;
        }
    }

    cout << "Кількість елементів, більших за " << A << ": " << count << endl;

    return 0;
}
