#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int m = 4, n = 7;
    int a[m][n];

    cout << "Масив:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 100;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    int minVal = a[0][0];
    int minI = 0, minJ = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < minVal) {
                minVal = a[i][j];
                minI = i;
                minJ = j;
            }
        }
    }

    cout << "\nМінімальний елемент: " << minVal << " (рядок: " << minI << ", стовпчик: " << minJ << ")\n";

    return 0;
}
