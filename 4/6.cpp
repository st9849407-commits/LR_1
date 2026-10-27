#include <iostream>

using namespace std;

int main(void) {
    bool answer;
    int value;

    if (!(cin >> value)) return 1;

    answer = (value >= 0 && value < 10) || 
             (value * 2 < 20 && value * 2 - 2 > -2) || 
             (value - 5 > 1 && (value - 5) / 2.0 < 10) || 
             (value == 111);

    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
    return 0;
}
