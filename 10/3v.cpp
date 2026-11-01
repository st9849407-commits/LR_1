#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int m = 5, n = 7;
    int a[m][n];

    cout << "Масив:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 10;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nРезультат:\n";
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        cout << "Сума елементів рядка " << i << ": " << sum << endl;
    }

    return 0;
}
