#include<iostream>
using namespace std;

float perimeter(char letter, float number);

main()
{
    float number;
    char letter;

    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): " ;
    cin >> letter;

    cout << "Enter the value: " ;
    cin >> number ;

    float perimeterofshape = perimeter(letter,number);
    cout << "The perimeter is: " << perimeterofshape ;
}

float perimeter(char letter, float number)
{
    float perimeterofshape;
    if (letter=='s')
    {
        perimeterofshape = number * 4 ;
    }
    if (letter=='c')
    {
        perimeterofshape = number * 6.28 ;
    }
    if (letter=='t')
    {
        perimeterofshape = number * 3 ;
    }
    if (letter=='h')
    {
        perimeterofshape = number * 6 ;
    }

    return perimeterofshape;
}