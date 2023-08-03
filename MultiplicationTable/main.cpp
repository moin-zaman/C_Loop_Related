#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Please enter any number : ";
    cin >> num;

    for(int i=1; i<=10; i++)
    {
        int r = num * i;
        cout << num << "X" << i << " = " << r << endl;
    }


}
