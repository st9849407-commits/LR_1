#include <iostream>
#include <iomanip>

using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date start, end;

    if (!(cin >> start.hours >> start.minutes >> end.hours >> end.minutes)) return 1;

    int startTotal = start.hours * 60 + start.minutes;
    int endTotal = end.hours * 60 + end.minutes;

    int diff = endTotal - startTotal;
    if (diff < 0) {
        diff += 24 * 60; // Переход через полночь
    }

    int resHours = diff / 60;
    int resMinutes = diff % 60;

    cout << resHours << ":" << setfill('0') << setw(2) << resMinutes << endl;

    return 0;
}
