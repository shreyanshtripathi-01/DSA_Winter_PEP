#include <bits/stdc++.h>
using namespace std;

void func(string *ptr_str)
{
    ptr_str->pop_back();
    cout << *ptr_str << endl;
}

int main()
{
    string x = "abc123";
    func(&x);
    cout << x << endl;

    return 0;
}