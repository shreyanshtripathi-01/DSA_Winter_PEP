#include <bits/stdc++.h>
using namespace std;

int main()
{
    float *ptr1 = new float(10.50);
    float **sptr = &ptr1;
    float ***tptr = &sptr;

    cout << "The original value (from sptr): " << **sptr << endl;
    cout << "The original value (from tptr): " << ***tptr << endl;
    cout << "Pointer 1 address: " << ptr1 << endl;
    cout << "Pointer 2 address: " << sptr << endl;
    cout << "Pointer 3 address: " << tptr << endl;

    return 0;
}

//question - we have an array of short intergers having 3 elements, and the address of the first element is 10. What will be the other address of other elements;
//answer - address array : [10, 11, 12]