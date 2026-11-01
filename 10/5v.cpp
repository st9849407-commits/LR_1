#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int m = 3, n = 4;
    int a[m][n];

    cout << "Масив:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 100;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    int maxVal = a[0][0];
    int maxI = 0, maxJ = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > maxVal) {
                maxVal = a[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }

    cout << "\nМаксимальний елемент: " << maxVal << " (рядок: " << maxI << ", стовпчик: " << maxJ << ")\n";

    return 0;
}
