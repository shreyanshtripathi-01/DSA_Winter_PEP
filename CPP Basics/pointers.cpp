#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "str1";
    string *a_ptr = &a;

    cout << a_ptr << endl;
    cout << &(a_ptr) << endl;

    //& symbol is amparsent - both are used for by reference as a parameter to function, here it is a pointer. Completely unrelated.

    // HW - use reference and pointer in the calc.cpp app

    return 0;
}
