#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
const auto dirs = {
    {0, 1}, {1, 0}, {0, -1}, {-1, 0}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};

int main()
{
    // declaring a variable v/s defining a value
    int x; // declaration
    x = 5; // defining

    int num = 'a'; // if printed output will be ascii value of a
    // so chars are mapped with ascii values
    // type casting v/s type conversion
    cout << num << endl;

    string name;
    int var_name;
    vector<char> vec{10};

    for (int i = 0; i < 10; ++i)
    {
        cout << var_name << " ";
        cin >> var_name;
    }

    return 0;
}