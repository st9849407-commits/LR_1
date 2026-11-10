#include <iostream>

using namespace std;

class AdHocSquare 
{
public:
    AdHocSquare(double side) 
    {
        set_side(side);
    }

    void set_side(double side) 
    {
        if (side >= 0) 
        {
            this->side = side;
        }
    }

    double get_area() 
    {
        return side * side;
    }

private:
    double side;
};


class LazySquare 
{
public:
    LazySquare(double side) 
    {
        set_side(side);
    }

    void set_side(double side) 
    {
        if (side >= 0) 
        {
            this->side = side;
            this->side_changed = true;
        }
    }

    double get_area() 
    {
        if (side_changed) 
        {
            area = side * side;
            side_changed = false;
        }
        return area;
    }

private:
    double side;
    double area;
    bool side_changed;
};

int main() 
{
    AdHocSquare adhoc(5);
    cout << "AdHocSquare area: " << adhoc.get_area() << endl;
    adhoc.set_side(10);
    cout << "AdHocSquare new area: " << adhoc.get_area() << endl;

    LazySquare lazy(4);
    cout << "LazySquare area: " << lazy.get_area() << endl;
    lazy.set_side(6);
    cout << "LazySquare new area: " << lazy.get_area() << endl;

    return 0;
}
