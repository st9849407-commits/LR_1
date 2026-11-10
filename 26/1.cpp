#include <iostream>
#include <string>

using namespace std;

class IPAddress
{
protected:
    string ip;

public:
    IPAddress(const string &address) : ip(address)
    {
    }

    IPAddress(const IPAddress &other) : ip(other.ip)
    {
    }

    virtual ~IPAddress()
    {
    }

    virtual void print() const
    {
        cout << ip;
    }
};

class IPAddressChecked : public IPAddress
{
private:
    bool correct;

    static bool isValid(const string &address)
    {
        int parts = 0;
        size_t pos = 0;

        while (true)
        {
            size_t dot = address.find('.', pos);
            string part = address.substr(pos, dot == string::npos ? string::npos : dot - pos);

            if (part.empty() || part.length() > 3)
                return false;

            int value = 0;
            for (size_t i = 0; i < part.length(); i++)
            {
                if (part[i] < '0' || part[i] > '9')
                    return false;
                value = value * 10 + (part[i] - '0');
            }

            if (value > 255)
                return false;

            parts++;

            if (dot == string::npos)
                break;
            pos = dot + 1;
        }

        return parts == 4;
    }

public:
    IPAddressChecked(const string &address) : IPAddress(address), correct(isValid(address))
    {
    }

    IPAddressChecked(const IPAddressChecked &other) : IPAddress(other), correct(other.correct)
    {
    }

    void print() const override
    {
        IPAddress::print();
        cout << " - " << (correct ? "Correct" : "Not Correct");
    }
};

int main(void)
{
    string input;

    cin >> input;
    IPAddress address1(input);

    cin >> input;
    IPAddressChecked address2(input);

    cin >> input;
    IPAddressChecked address3(input);

    address1.print();
    cout << endl;
    address2.print();
    cout << endl;
    address3.print();
    cout << endl;

    return 0;
}
