#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    int choice;

    cout << "Enter the choice (1=+|2=-|3=*|4=/|5=<<||6=>>): ";

    cin >> choice;

    cout << "Enter the value of A: ";
    cin >> a;
    cout << "Enter the value of B: ";
    cin >> b;

    cout << "Your answer is: ";

    if (choice == 1)
    {
        cout << a + b << endl;
    }
    else if (choice == 2)
    {
        cout << a - b << endl;
    }
    else if (choice == 3)
    {
        cout << a * b << endl;
    }
    else if (choice == 4)
    {
        cout << a / b << endl;
    }
    else if (choice == 5)
    {
        cout << (a << b) << endl;
    }
    else if (choice == 6)
    {
        cout << (a >> b) << endl;
    }
    else
    {
        cout << "Please enter a valid choice!" << endl;
    }
}

/** ANOTHER WAY JUST USING STRING OR CHARS
 * #include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    char choice;
    //string choice;

    cout << "Enter the choice (a=+|s=-|m=*|d=/|l=<<||r=>>): ";

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
    else if (choice == 'l')
    {
        cout << (a << b) << endl;
    }
    else if (choice == 'r')
    {
        cout << (a >> b) << endl;
    }
    else
    {
        cout << "Please enter a valid choice!" << endl;
    }
}

(choice==1)?cout<<a+b;:(choice==2)?cout<<a-b;:(choice==3)?cout<<a*b;:(choice==2)?cout<<a/b;:
 */