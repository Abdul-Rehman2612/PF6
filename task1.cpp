#include <iostream>
using namespace std;

bool greaterNumber(int number1 , int number2 );

main()
{
    int number1,number2;
    cout << "Enter the first number: " ;
    cin >> number1 ;
    cout << "Enter the second number: " ;
    cin >> number2 ;
    bool x=greaterNumber(number1,number2);
    cout << x ;
    return 0;
}

bool greaterNumber(int  number1,int number2)
{
    if (number1>number2)
    {
    return true;
    }
    else
    { 
    return false;
    }
}
