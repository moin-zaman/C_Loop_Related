#include <iostream>

using namespace std;

int main()
{
    int count = 0, n;

    cout << "Please any number : " ;
    cin >> n;

    for(int i= 2; i < n; i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }

    if(count == 0)
    {
        cout << n << " is a Prime Number" << endl;
    }
    else
    {
        cout << n << " is not a Prime Number" << endl;
    }
}
