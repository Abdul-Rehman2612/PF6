#include<iostream>
using namespace std;

float lowestPrice(int kilometers,string time_of_day);

main()
{
    int numberofkilometers;
    string travelling_time;

    cout << "Enter the number of kilometers: " ;
    cin >> numberofkilometers ;

    cout << "Enter the period of the day (day/night): " ;
    cin >> travelling_time ;

    float lowest_travelling_price = lowestPrice(numberofkilometers,travelling_time);
    cout << "Lowest price for " << numberofkilometers << " kilometers: " << lowest_travelling_price << " EUR" ;
}

float lowestPrice(int kilometers,string time_of_day)
{
    float fare;
    if(kilometers < 20 )
    {
        if (time_of_day=="day")
        {
            fare=0.79*kilometers+0.70;
            return fare;
        }
        if (time_of_day=="night")
        {
            fare=0.90*kilometers+0.70;
            return fare;
        }
        
    }
    if (kilometers >=20 && kilometers < 100)
    {
        if(time_of_day=="day" || time_of_day=="night")
        {
            fare=0.09*kilometers;
            return fare;
        }
    }
    if (kilometers > 100)
    {
        if(time_of_day=="day" || time_of_day=="night")
        {
            fare=0.06*kilometers;
            return fare;
        }
    }

}