#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int m = 4, n = 3;
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
    for (int i = 0; i < m; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 2 == 0) {
                count++;
            }
        }
        cout << "Рядок " << i << ": " << count << " парних чисел\n";
    }

    return 0;
}
