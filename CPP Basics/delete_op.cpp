#include <bits/stdc++.h>
using namespace std;

void func(int *ptr)
{
    cout << "1 " << (*ptr) << endl;
    delete ptr;
}

int main()
{
    int *ptr = new int(10);

    func(ptr);
    ptr = nullptr;

    cout << "2" << (*ptr) << endl;

    return 0;
}