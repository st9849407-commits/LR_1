#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int m = 6, n = 4;
    int a[m][n];

    cout << "Масив:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 20;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nРезультат:\n";
    for (int j = 0; j < n; j++) {
        int count = 0;
        for (int i = 0; i < m; i++) {
            if (a[i][j] % 2 == 0) {
                count++;
            }
        }
        cout << "Стовпчик " << j << ": " << count << " парних чисел\n";
    }

    return 0;
}
