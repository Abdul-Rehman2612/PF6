#include<iostream>
using namespace std;

float totalIncome(string screening_type,int rows_in_hall,int columns_in_hall);

main()
{
    string screening_type_in_hall;
    int number_of_rown_in_hall,number_of_columns_in_hall;

    cout << "Enter the screening type (Premiere/Normal/Discount): " ;
    cin >> screening_type_in_hall;

    cout << "Enter the number of rows: " ;
    cin >> number_of_rown_in_hall;

    cout << "Enter the number of columns: " ;
    cin >> number_of_columns_in_hall;

    float Total_Income_of_Hall = totalIncome(screening_type_in_hall,number_of_rown_in_hall,number_of_columns_in_hall);
    cout << Total_Income_of_Hall ;
}

float totalIncome(string screening_type,int rows_in_hall,int columns_in_hall)
{
    float income = 0 ;

    if(screening_type == "Premiere")
    {
        income = rows_in_hall * columns_in_hall * 12 ;
    }

    if(screening_type == "Normal")
    {
        income = rows_in_hall * columns_in_hall * 7.5 ;
    }
    
    if(screening_type == "Discount")
    {
        income = rows_in_hall * columns_in_hall * 5 ;
    }
    
    return income;
}