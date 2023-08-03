#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0, temp, r;

    cout << "Please enter any postive integer : ";
    cin >> num;

    temp = num;

    while(temp!=0)
    {
        r = temp%10;
        sum = sum * 10 + r;
        temp = temp/10;
    }

    cout << "Reverse of " << num << " is " << sum << endl;

    if(sum==num)
    {
        cout << num << " is a Palindrome number " << endl;
    }
    else
    {
        cout << num << " is not a Palindrome number " << endl;
    }
}
