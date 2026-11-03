#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int n;
    cout << "Введіть кількість елементів масиву: ";
    if (!(cin >> n) || n <= 0) return 1;

    double *arr = new double[n];

    int positiveCount = 0;
    int negativeCount = 0;

    cout << "Елементи масиву: ";
    for (int i = 0; i < n; i++) {
        arr[i] = ((double)rand() / RAND_MAX) * 4.0 - 2.0;
        cout << arr[i] << " ";

        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }
    }
    cout << endl;

    cout << "Кількість додатних чисел: " << positiveCount << endl;
    cout << "Кількість від'ємних чисел: " << negativeCount << endl;

    delete[] arr;

    return 0;
}
