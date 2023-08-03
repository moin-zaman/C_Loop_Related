#include <iostream>

using namespace std;

int main()
{
    int n, fact = 1;

    cout << "Please enter number : ";
    cin >> n;

    for(int i = n; i >= 1; i--)
    {
        fact = fact*i;

    }
    cout << "Factorial of " << n << " is " << fact << endl;

//    int num, fact = 1;
//
//    cout <<"Please enter any number : ";
//    cin >> num;
//
//    for(int i = 1; i <=num; i++)
//    {
//        fact = fact * i;
//    }
//
//    cout << "Factorial of " << num << " is " << fact << endl;


}
