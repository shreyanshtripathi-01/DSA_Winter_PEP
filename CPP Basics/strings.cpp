#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
// const v1{p1} dirs = {
//     {0, 1}, {1, 0}, {0, -1}, {-1, 0}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};

int main()
{
    string name; // declaraing a string
    name = "shreyansh";
    cout << name << endl;

    // ANOTHER WAY - using string constructor, c++ allows even when string is not a class
    // once defined a variable in a data type we cannot change it.
    // AUTO keyword in c++, can we declare a variable using auto and C++ is statically typed., soft rule to break using auto in c++ to define or decalre a variable.
    string n = string("shreyansh");
    // auto name = string("shreyansh");
    // auto nane = "shreyansh";

    string n1 = string("shreyansh\ntripathi");
    cout << n1 << endl;

    // learn about unicode characters

    return 0;
}