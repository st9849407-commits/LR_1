#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int m = 3, n = 3;
    int a[m][n];

    cout << "Масив:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 10;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    int mainDiagonalSum = 0;
    int antiDiagonalSum = 0;

    for (int i = 0; i < m; i++) {
        mainDiagonalSum += a[i][i];
        antiDiagonalSum += a[i][n - 1 - i];
    }

    cout << "\nСума елементів головної діагоналі: " << mainDiagonalSum << endl;
    cout << "Сума елементів побічної діагоналі: " << antiDiagonalSum << endl;

    return 0;
}
