#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int r;
    cout << "Please enter the number of row : ";
    cin >> r;
    cout << endl;

    cout << "Pattern 1 : " << endl;
    for(int i = 1; i <=r; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for(int i = r; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;



    cout << "Pattern 2 : " << endl;
    for(int i = 1; i <=r; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for(int i = r-1; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;



    cout << "Pattern 3 : " << endl;
    int ch;
    for(int i = 1; i <=r; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            ch = 64 + j;
            cout << char(ch) << " ";
        }
        cout << endl;
    }
    for(int i = r; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            ch = 64 + j;
            cout << char(ch) << " ";
        }
        cout << endl;
    }
    cout << endl;




    cout << "Pattern 4 : " << endl;
    for(int i = 1; i <=r; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            ch = 64 + j;
            cout << char(ch) << " ";
        }
        cout << endl;
    }
    for(int i = r-1; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            ch = 64 + j;
            cout << char(ch) << " ";
        }
        cout << endl;
    }
    cout << endl;



}
