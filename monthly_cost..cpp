#include<iostream>
using namespace std;

int main()
{
    int totalBudget = 5000;
    int busCost;
    int foodCost;
    float bookCost;
    double outGoingCost;
    float dailyCost;
    float monthlyCost;
    float savings;

    cout << "Enter your Bus Cost: ";
    cin >> busCost;

    cout << "Enter Your Food Cost: "  ;
    cin >> foodCost;

    cout << "Enter Your Book Cost: " ;
    cin >> bookCost;

    cout << "Enter Your Outgoing Cost: ";
    cin >> outGoingCost;


    dailyCost = busCost + foodCost + bookCost + outGoingCost;
    monthlyCost = 30 * dailyCost;
    savings = totalBudget - monthlyCost;

    cout << "Your Daily Cost is = " << dailyCost << " BDT" << endl;
    cout << "Your Monthly Cost is = " << monthlyCost << " BDT" << endl;
    cout << "Your Saving is = " << savings << " BDT" << endl;

}
