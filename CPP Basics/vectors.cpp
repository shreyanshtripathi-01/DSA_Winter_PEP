#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    // vector<int> dy_arr ;
    int x;
    cin >> x;

    vector<char> char_arr;
    vector<int> arr(3, 7);

    for (int i : arr)
    {
        cout << i << ' ';
    }
    cout << endl;
    // 7 7 7

    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);
    // 7 7 7 0 1 2

    arr.pop_back();
    // 7 7 7 0 1

    for (int i : arr)
    {
        cout << i << ' ';
    }
    cout << endl;

    cout << arr[1] << endl;
    arr[1] = 76;
    cout << arr[1] << endl;

    // functions to read - implace, insert, clear, (whu implace is there), size, empty.

    // vector<char> char_arr(x);
    // pass a second arguments => as default value (especially for string or char else for numbers bydefault it is 0)
    // vector<string> str_arr(x, "default_value");

    // push and pop back - for back and end and inserting a value - insert,
    // clear - empty the array
    // learn about the sizing and working of vector properly - both front and back in the system and also working of all array operation and cpp functions (pushing, popping, insert at beg, pos, end and same for delete, clear and everything)

    arr.clear();
    cout << arr.size() << " " << arr.empty() << endl;

    //difference between str.length and str.size. (internally and externally)

    return 0;
}