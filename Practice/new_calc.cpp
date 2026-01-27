#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    char choice;
    
    cout << "Enter the choice (a=+|s=-|m=*|d=/|L=<<|R=>>|&='&'| |='|'|^='^'): ";

    cin >> choice;

    cout << "Enter the value of A: ";
    cin >> a;
    cout << "Enter the value of B: ";
    cin >> b;

    cout << "Your answer is: ";

    if (choice == 'a')
    {
        cout << a + b << endl;
    }
    else if (choice == 's')
    {
        cout << a - b << endl;
    }
    else if (choice == 'm')
    {
        cout << a * b << endl;
    }
    else if (choice == 'd')
    {
        cout << a / b << endl;
    }
    else if (choice == 'L')
    {
        cout << (a << b) << endl;
    }
    else if (choice == 'R')
    {
        cout << (a >> b) << endl;
    }
    
    else if (choice == '&')
    {
        cout << (a & b) << endl;
    }
    
    else if (choice == '|')
    {
        cout << (a | b) << endl;
    }
   
    else if (choice == '^')
    {
        cout << (a ^ b) << endl;
    }
    else
    {
        cout << "Please enter a valid choice!" << endl;
    }

    return 0; 
}
