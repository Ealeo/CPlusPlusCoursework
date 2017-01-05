//This program will calculate the cost of software units including price breaks.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const float PRICE = 99.00f;
    int   software;
    float costperUnit,
          totalCost;
    cout << "How many software units were sold?";
    cin >> software;
    if(software < 0)
        cout << "You have entered bad data! Please refresh the program to restart.";
    else
    {
        if(software >= 0 && software <= 9)
        costperUnit = PRICE;
        else if(software >= 10 && software <= 19)
        costperUnit = PRICE * .2;
        else if(software >= 20 && software <= 49)
        costperUnit = PRICE * .3;
        else if(software >= 50 && software <= 99)
        costperUnit = PRICE * .4;
        else
        costperUnit = PRICE * .5;
        totalCost = costperUnit * software;
    
        cout << endl;
        cout << fixed << showpoint << setprecision (2);
        cout << "Software Units Sold: " << setw(40) << software << endl;
        cout << "Price Per Unit: " << setw(35) << '$' << setw(10) << costperUnit << endl;
        cout << "Total Balance Due: " << setw(32) << '$' << setw(10) << totalCost << endl;
        cout << endl;
    }
    return 0;
}