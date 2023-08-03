#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, r = 0;
    cout << "Please enter any number : ";
    cin >> num;

    for(int i=0; i<=num; i++)
    {
        r = r + i;
    }
    cout << "Sum of First " << num << " numbers " << r << endl;


    //Sum of Even numbers

    int en = 0;
    for(int i=0; i<=num; i=i+2)
    {
        en = en + i;
    }
    cout << "Sum of First " << num << " Even numbers " << en << endl;


    //Sum of Odd numbers

    int on = 0;
    for(int i=1; i<=num; i=i+2)
    {
        on = on + i;
    }
    cout << "Sum of First " << num << " Odd numbers " << on << endl;


    //Sum of Floating numbers

    float fn = 0.00;
    for(float i=1.5; i<=num; i++)
    {
        fn = fn + i;
    }
    cout << "Sum of First " << num << " Floating numbers " << fn << endl;




    //Sum of Square numbers

    int sqn = 0;
    for(int i=1; i<=num; i++)
    {
        sqn = sqn + i*i;
    }
    cout << "Sum of First " << num << " Square numbers " << sqn << endl;



    //Sum of more square power numbers
    //for this we have to use cmath if we use cmath function for getting result of power function output

    int pn = 0;
    for(int i=1; i<=num; i++)
    {
        pn = pn + pow(i,5);
        //pn = pn + i*i*i*i*i;
    }
    cout << "Sum of First " << num << " power numbers " << pn << endl;



}
