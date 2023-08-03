#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int r;
    cout << "Please enteer the number of row : ";
    cin >> r;


    cout << "Pattern 1 : " << endl;
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
    for(int i = r; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 3 : " << endl;
    for(int i = r; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            if(j % 2 != 0)
            {
                cout << j % 2 << " ";
            }
            else
            {
                cout << j % 2 << " ";
            }
        }
        cout << endl;
    }
    cout << endl;



    cout << "Pattern 4 : " << endl;
    for(int i = r; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i % 2 << " ";

            /*if(i % 2 != 0)
            {
                cout << i % 2 << " ";
            }
            else
            {
                cout << i % 2 << " ";
            }*/
        }
        cout << endl;
    }
    cout << endl;


    int ch = 64;
    cout << "Pattern 5 : " << endl;
    for(int i = r; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            /*ch = ch + j;
            cout << char(ch) << " ";
            ch = 64;*/;

            ch = 64 + j; // I am not adding j value with ch but adding with 64 ; So 64 + 1 = 65 , 64 + 2 = 66;
            cout << char(ch) << " ";
        }
        //ch = 64;
        cout << endl;
    }
    cout << endl;




    cout << "Pattern 6 : " << endl;
    for(int i = r; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            /*ch = ch + i;
            cout << char(ch) << " ";
            ch = 64;*/;

            ch = 64 + i; // I am not adding j value with ch but adding with 64 ; So 64 + 4 = 68 , 64 + 4 = 68;
            cout << char(ch) << " ";
        }
        //ch = 64;
        cout << endl;
    }
    cout << endl;



    cout << "Pattern 7 : " << endl;
    for(int i = r; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;



    cout << "Pattern 8 : " << endl;
    for(int i = r; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "# ";
        }
        cout << endl;
    }
    cout << endl;





    getch();
}
