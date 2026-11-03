#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    int matrix[10][10] = {};

    int *p = &matrix[0][0];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            *(p + i * 10 + j) = (i + 1) * (j + 1);
        }
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cout << setw(4) << *(p + i * 10 + j);
        }
        cout << endl;
    }

    return 0;
}
