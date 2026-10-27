#include <iostream>

using namespace std;

int main() {
    int trainNumber;
    if (!(cin >> trainNumber)) return 1;

    switch (trainNumber) {
        case 11:
            cout << "Київ — Львів" << endl;
            break;
        case 35:
            cout << "Одеса — Перемишль" << endl;
            break;
        case 71:
            cout << "Київ — Запоріжжя" << endl;
            break;
        case 122:
            cout << "Миколаїв — Рівне" << endl;
            break;
        default:
            cout << "Невідомий номер поїзда" << endl;
            break;
    }

    return 0;
}
