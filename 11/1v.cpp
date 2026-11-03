#include <iostream>
#include <iomanip>

using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date time;
    int addMinutes;

    if (!(cin >> time.hours >> time.minutes >> addMinutes)) return 1;

    int totalMinutes = time.hours * 60 + time.minutes + addMinutes;
    
    totalMinutes %= (24 * 60);
    if (totalMinutes < 0) totalMinutes += 24 * 60;

    time.hours = totalMinutes / 60;
    time.minutes = totalMinutes % 60;

    cout << time.hours << ":" << setfill('0') << setw(2) << time.minutes << endl;

    return 0;
}
