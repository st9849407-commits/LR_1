#include <iostream>
using namespace std;

int main() {
    double x;   
    double y;
    bool i = false;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    
    if (x >= -1 && x <= 0 && y >= 0 && y <= 1) {
        i = true;
    }
    if (x >= 0 && x <= 1 && y >= -1 && y <= 0) {
        i = true;
    }
  
    cout << boolalpha << i;
    return 0;
}
