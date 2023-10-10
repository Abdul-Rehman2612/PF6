#include<iostream>
#include<iomanip>
#include<sstream>
using namespace std;

string calculateCost(float budget, string category , int numPeople);

main()
{
    float budget;
    int numPeople;
    string category;

    cout << "Enter the budget: " ;
    cin >> budget ;

    cout << "Enter the category (VIP/Normal): " ;
    cin >> category ;

    cout << "Enter the number of people in the group: " ;
    cin >> numPeople ;

    string result = calculateCost(budget, category , numPeople);
    cout << result;
    return 0;

}
string calculateCost(float budget, string category , int numPeople)
{
    float ticketamount;
    float remainingBudget;
    if(numPeople >= 1 && numPeople <= 4)
    {
        remainingBudget = budget - (budget*75)/100;    
    }
    if(numPeople >= 5 && numPeople <= 9)
    {
        remainingBudget = budget - (budget*60)/100;
    }
    if(numPeople >= 10 && numPeople <= 24)
    {
        remainingBudget = budget - (budget*50)/100;
    }
    if(numPeople >= 25 && numPeople <= 49)
    {
        remainingBudget = budget - (budget*40)/100;
    }
    if(numPeople >=50)
    {
        remainingBudget= budget-(budget*25)/100;
    }
    if(category=="VIP")
    {
        ticketamount = numPeople * 499.99 ;
    }
    if(category=="Normal")
    {
        ticketamount = numPeople * 249.99;
    }
    if(budget > (ticketamount+remainingBudget))
    {   
        remainingBudget=remainingBudget-ticketamount;
        return "Yes! You have "+to_string(remainingBudget)+" leva left.";
    }
    if(budget < (ticketamount+remainingBudget))
    {
        remainingBudget=(remainingBudget-ticketamount)*-1;
        stringstream ss;
        ss << setprecision(2) << remainingBudget;
        string s = ss.str();
        return  "Not enough money! You need "+to_string(remainingBudget)+" leva."; 
    }
    
}