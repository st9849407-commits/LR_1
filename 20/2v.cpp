#include <iostream>
#include <string>

using namespace std;

class Square 
{
private:
    double side;
    double area;

public:
    Square(double side) 
    {
        set_side(side);
    }

    void set_side(double side) 
    {
        if (side >= 0) 
        {
            this->side = side;
            this->area = side * side;
        }
    }

    void print() 
    {
        cout << "Square: side=" << side << " area=" << area << endl;
    }
};

int main() 
{
    Square s(4);

    s.print();

    s.set_side(2.0);
    s.print();

    s.set_side(-33.0);
    s.print();

    return 0;
}
