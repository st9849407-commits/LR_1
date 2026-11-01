#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int n = 10;
    int arr[10];

    cout << "Початковий масив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 - 50;
        cout << arr[i] << " ";
    }
    cout << endl;

    int minIdx = 0, maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIdx]) minIdx = i;
        if (arr[i] > arr[maxIdx]) maxIdx = i;
    }

    int temp = arr[minIdx];
    arr[minIdx] = arr[maxIdx];
    arr[maxIdx] = temp;

    cout << "Результат: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
