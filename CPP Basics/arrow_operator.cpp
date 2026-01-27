#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "str1";
    string *a_ptr = &a;

    // a_ptr->push_back('t);

    (*a_ptr).push_back('3');

    cout << *a_ptr << endl;

    //learn about types of memory and compiler prioerity
    //Stack memory and Heap Memory
    //

    return 0;
}