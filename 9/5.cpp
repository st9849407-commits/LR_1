#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    srand(time(0));
    int n = 10;
    int arr[10];

    cout << "Масив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    int max1 = -1, max2 = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == -1) {
        cout << "У масиві недостатньо різних елементів для визначення другого за величиною." << endl;
    } else {
        cout << "Другий за величиною елемент: " << max2 << endl;
    }

    return 0;
}
