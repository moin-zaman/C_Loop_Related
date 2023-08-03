#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    //Pattern 3
    int r, c;
    cout << "Please enter the number of row : ";
    cin >> r;

    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            //int a = j % 2;
            //cout << a << " ";

            if(j % 2 != 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }

        }
        cout << endl;
    }
    cout << endl <<endl;




    cout << "Pattern 4 " << endl;

    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            //int a = j % 2;
            //cout << a << " ";

            if(i % 2 != 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }

        }
        cout << endl;
    }
    cout << endl << endl;


    cout << "Pattern 5 " << endl;

    int ch;
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            ch = 64 + j; // I am not adding j value with ch but adding with 64 ; So 64 + 1 = 65 , 64 + 2 = 65
            cout << ch << " ";

        }
        ch = 64;
        cout << endl;
    }
    cout << endl << endl;


    cout << "Pattern 6 " << endl;

    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i % 2 != 0)
            {
                ch = 64 + i;
                cout << char(ch) << " ";
            }
            else
            {
                ch = 64 + i;
                cout << char(ch) << " ";
            }

        }
        ch = 64;
        cout << endl;
    }


}
