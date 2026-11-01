#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int m = 4, n = 6;
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
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum += a[i][j];
        }
        cout << "Сума елементів стовпчика " << j << ": " << sum << endl;
    }

    return 0;
}
