#include <bits/stdc++.h>
using namespace std;

class Calculator
{
    // methods are the functions defined in the class - methods of the class;
    // access specifiers - public, private, protected
    // private - no one can access outside class, neither read or wirte
    // protected - sub classes/inherited/ child classes can access (inherited classes, friend functions)
    // public - anyone can access
};

class Bike{
public:
    bool kick;
    bool kick_getter()
    {
        return kick;
    }

    int getter_gear_count()
    {
        return gear_count;
    }

    //learn about this keyword

private:
    int gear_count;
    void gear_count_setter(int count)
    {
        gear_count = count;
    }
};

int main()
{

    return 0;
}