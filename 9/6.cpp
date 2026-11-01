#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int n = 10;
    int arr[10];

    cout << "Масив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 5 - 2; // випадкові числа з можливими нулями
        cout << arr[i] << " ";
    }
    cout << endl;

    int zeroIdx = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeroIdx = i;
            break;
        }
    }

    if (zeroIdx != -1) {
        cout << "Номер першого нульового елемента (індекс): " << zeroIdx << endl;
    } else {
        cout << "Масив не містить нульових елементів." << endl;
    }

    return 0;
}
