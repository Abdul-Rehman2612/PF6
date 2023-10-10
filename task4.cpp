#include<iostream>
using namespace std ;

int findGreatest(int number1,int number2,int number3);

main()
{
    int number1,number2,number3;

    cout << "Enter the first number: " ;
    cin >> number1;

    cout << "Enter the second number: " ;
    cin >> number2;

    cout << "Enter the third number: " ;
    cin >> number3;

    int greatestnumber = findGreatest(number1,number2,number3);
    cout << "The greatest number among " << number1 << ", " << number2 << ", and " << number3 << " is: " << greatestnumber ;
}

int findGreatest(int number1,int number2,int number3)
{
    if (number1>number2 && number1>number3)
    {
        return number1;
    }

    if (number2>number1 && number2>number3)
    {
        return number2;
    }

    if (number3>number1 && number3>number2)
    {
        return number3;
    }
    
    if(number1==number2 && number1==number3)
    {
        int x=number1=number2=number3;
        return x;
    }
}