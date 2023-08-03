#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int n;
    cout << "How many Fibonacci numbers you want ? " << endl;
    cin >> n;


    int fibo, first = 0, second = 1;

    cout << "So " << n << " fibonacci number are : ";

    int count = 0;
    while(count < n)
    {
        if(count <= 1)
        {
            fibo = count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        cout << fibo << " ";

        count++;
    }
    cout << endl;


    getch();
}
