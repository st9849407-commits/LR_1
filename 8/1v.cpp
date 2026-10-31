#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int m = 12;
    int arr[m];

    cout << "Введіть " << m << " елементів масиву: ";
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    // Копії масиву для сортування
    int asc[m], desc[m];
    for (int i = 0; i < m; i++) {
        asc[i] = arr[i];
        desc[i] = arr[i];
    }

    // Сортування за зростанням
    sort(asc, asc + m);

    // Сортування за спаданням
    sort(desc, desc + m, greater<int>());

    cout << "За зростанням: ";
    for (int i = 0; i < m; i++) {
        cout << asc[i] << " ";
    }
    cout << endl;

    cout << "За спаданням: ";
    for (int i = 0; i < m; i++) {
        cout << desc[i] << " ";
    }
    cout << endl;

    return 0;
}
