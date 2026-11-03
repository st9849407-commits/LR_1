#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    srand(time(0));
    const int n = 4;
    int matrix[n][n];

    int *p = &matrix[0][0];

    for (int i = 0; i < n * n; i++) {
        *(p + i) = rand() % 50 + 1;
    }

    cout << "Матрця:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << *(p + i * n + j);
        }
        cout << endl;
    }

    cout << "\nЕлементи головної діагоналі: ";
    for (int i = 0; i < n; i++) {
        cout << *(p + i * n + i) << " ";
    }
    cout << endl;

    cout << "Елементи побічної діагоналі: ";
    for (int i = 0; i < n; i++) {
        cout << *(p + i * n + (n - 1 - i)) << " ";
    }
    cout << endl;

    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < n * n; i++) {
        if (*(p + i) % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Кількість парних елементів: " << evenCount << endl;
    cout << "Кількість непарних елементів: " << oddCount << endl;

    return 0;
}
