#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0, r, temp;

    cout << "Please enter any positive integer : ";
    cin >> num;

    temp = num;

    while(temp!=0)
    {
        r = temp%10;
        sum = sum + (r*r*r);
        temp = temp/10;

    }

    cout << "Sum of number " << num << " is " << sum << endl;

    if(sum == num)
    {
        cout << num << " is a Armstrong number " << endl;
    }
    else
    {
        cout << num << " is not a Armstrong number " << endl;
    }


    int n, fact = 1, n1;

    cout << "Please enter any fact number : ";
    cin >> n;

    n1 = n;

    while(n1>=1)
    {
        fact = fact * n1;
        n1--;
    }

    cout << "factorial of : " << n << " is " << fact << endl;

}
