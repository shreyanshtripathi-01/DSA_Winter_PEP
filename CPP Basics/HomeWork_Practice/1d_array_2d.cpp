#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }

    cout << "The 1D Array is: ";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // converting to 2d array
    int two_d[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            two_d[i][j] = arr[i];
        }
    }

    cout << "The 2D Array is: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}