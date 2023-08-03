#include <iostream>

using namespace std;

int main()
{
    int r;
    cout << "Please enter the row : ";
    cin >> r;

    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }


    cout << endl;
    cout << "2nd Pattern " << endl;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }


    cout << endl;
    cout << "3rd Pattern " << endl;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
