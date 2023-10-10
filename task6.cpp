#include<iostream>
using namespace std;

float discount(string day, string month,float purchase_amount);

main()
{
    string day,month;
    float purchase_amount;

    cout << "Enter Purchase Day: " ;
    cin >> day ;

    cout << "Enter Purchase Month: " ;
    cin >> month ;

    cout << "Enter Purchase Amount: ";
    cin >> purchase_amount ;

    float final_price_after_discount = discount( day , month , purchase_amount);
    cout << "Payable Amount after discount: " << final_price_after_discount ;
}

float discount(string day, string month,float purchase_amount)
{
    float payable_amount = purchase_amount;
    if(day=="Sunday" || month=="October")
    {
        payable_amount = purchase_amount - (purchase_amount*10)/100 ;
    }
    
    return payable_amount;
}
