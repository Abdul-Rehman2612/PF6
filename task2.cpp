#include<iostream>
using namespace std;

bool parityAnalysis(int number);

main()
{
    int number;
    cout << "Enter a 3-digit number: " ;
    cin >> number;
    bool x = parityAnalysis(number);
    cout << x ;
}

bool parityAnalysis(int number)
{
    int a = number%10;
    int b = number/10;
    int c = b%10;
    int d = b/10;
    int sum = a + c + d ;
    if((sum%2)==(number%2))
    {
        return true;
    }   
    else
    {
        return false;
    }
}