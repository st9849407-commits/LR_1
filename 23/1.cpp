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

    void reduce() 
    {
        if (denominator == 0) return;
        int a = abs(numerator);
        int b = abs(denominator);
        while (b) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        if (a > 1) {
            numerator /= a;
            denominator /= a;
        }
    }

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
        reduce();
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
        } else if (whole > 0 && remainder == 0) {
            return sign + to_string(whole);
        } else {
            return sign + to_string(num) + "/" + to_string(den);
        }
    }

    double toDouble() 
    {
        return (double)numerator / denominator;
    }

    Fraction plus(Fraction that) 
    {
        int num = this->numerator * that.denominator + that.numerator * this->denominator;
        int den = this->denominator * that.denominator;
        return Fraction(num, den);
    }

    Fraction minus(Fraction that) 
    {
        int num = this->numerator * that.denominator - that.numerator * this->denominator;
        int den = this->denominator * that.denominator;
        return Fraction(num, den);
    }

    Fraction times(Fraction that) 
    {
        int num = this->numerator * that.numerator;
        int den = this->denominator * that.denominator;
        return Fraction(num, den);
    }

    Fraction by(Fraction that) 
    {
        int num = this->numerator * that.denominator;
        int den = this->denominator * that.numerator;
        return Fraction(num, den);
    }
};

int main(void) 
{
    string input1, input2;
    getline(cin, input1);
    getline(cin, input2);

    stringstream ss1(input1);
    int num1, den1;
    char slash1;
    ss1 >> num1 >> slash1 >> den1;

    stringstream ss2(input2);
    int num2, den2;
    char slash2;
    ss2 >> num2 >> slash2 >> den2;

    Fraction f1(num1, den1);
    Fraction f2(num2, den2);

    // Виведення результатів згідно з прикладами виведення в методичці
    cout << f1.toString() << " + " << f2.toString() << " = " << f1.plus(f2).toString() << endl;
    cout << f1.toString() << " - " << f2.toString() << " = " << f1.minus(f2).toString() << endl;
    cout << f1.toString() << " * " << f2.toString() << " = " << f1.times(f2).toString() << endl;
    cout << f1.toString() << " / " << f2.toString() << " = " << f1.by(f2).toString() << endl;

    return 0;
}
