
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    srand(time(0));
    int rows = 3, cols = 3;

    int **matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 20 - 10; 
        }
    }

    cout << "Матриця 3x3:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }

    cout << "\nЕлементи головної діагоналі: ";
    for (int i = 0; i < rows; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    cout << "Елементи побічної діагоналі: ";
    for (int i = 0; i < rows; i++) {
        cout << matrix[i][cols - 1 - i] << " ";
    }
    cout << endl;

    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    cout << "Кількість парних елементів: " << evenCount << endl;
    cout << "Кількість непарних елементів: " << oddCount << endl;

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
