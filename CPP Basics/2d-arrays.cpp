#include <bits/stdc++.h>
using namespace std;

int main()
{
    int td_arr[3][2] = {
        {12, 23}, {45, 78}, {90, 8}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << td_arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// write a porgram that takes an inpur of 9 numbers/chars and later create an 2d array of 3*3 and store the elements of the 1d array in the same order and print the 2d array.
// Ex - {1, 2, 3, 4, 5, 6, 7, 8, 9}
// Output - {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}