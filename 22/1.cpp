#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

class Fraction 
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator) 
    {
        if (denominator < 0) {
            this->numerator = -numerator;
            this->denominator = -denominator;
        } else {
            this->numerator = numerator;
            this->denominator = denominator;
        }
    }

    string toString() 
    {
        int num = numerator;
        int den = denominator;

        if (num == 0) {
            return "0";
        }

        string sign = "";
        if (num < 0) {
            sign = "-";
            num = -num;
        }

        int whole = num / den;
        int remainder = num % den;

        if (whole > 0 && remainder > 0) {
            return sign + to_string(whole) + " " + to_string(remainder) + "/" + to_string(den);
        }
        else if (whole > 0 && remainder == 0) {
            return sign + to_string(whole);
        }
        else {
            return sign + to_string(num) + "/" + to_string(den);
        }
    }

    double toDouble() 
    {
        return (double)numerator / denominator;
    }
};

int main(void) 
{
    string input;
    getline(cin, input);

    stringstream ss(input);
    int num, den;
    char slash;
    ss >> num >> slash >> den;

    Fraction fraction(num, den);

    cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;

    return 0;
}
