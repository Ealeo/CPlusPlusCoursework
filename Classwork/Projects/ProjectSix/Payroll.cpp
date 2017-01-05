//This program will calculate an employee's net pay.
//Please only enter your taxes in dollars, not in percents.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int     empNum;
    
    float   grossPay,
            fedTax,
            stateTax,
            ficaTax,
            netPay;
    do
    {
   		cout << "Enter a valid employee number, or enter 0 to quit.\n";
	    cin >> empNum;
    }while(empNum < 0);
        
    while (empNum != 0)
    {
        do
        {
        do
        {
            cout << "Enter your gross pay.\n";
            cin >> grossPay;
        }while(grossPay < 0);
        
        do
        {
            cout << "Enter your federal tax (Please only enter a dollar amount).\n";
            cin >> fedTax;
        }while(fedTax < 0 || fedTax > grossPay);
    
        do
        {
            cout << "Enter your state tax (Please only enter a dollar amount).\n";
            cin >> stateTax;
        }while(stateTax < 0 || stateTax > grossPay);

        do
        {
            cout << "Enter your FICA tax (Please only enter a dollar amount).\n";
            cin >> ficaTax;
        }while(ficaTax < 0 || ficaTax > grossPay);
        }while(grossPay < fedTax + stateTax + ficaTax);
            netPay = grossPay - fedTax - stateTax - ficaTax;
        
        cout << endl;
        cout << fixed << showpoint << setprecision(2);
        cout << "Employee Number: " << setw(44) << empNum << endl;
        cout << "Gross Pay: " << setw(40) << '$' <<  setw(10) << grossPay << endl;
        cout << "Federal Tax: " << setw(38) << '$' << setw(10) << fedTax << endl;
        cout << "State Tax: " << setw(40) << '$' << setw(10) << stateTax << endl;
        cout << "FICA Tax: " << setw(41) << '$' << setw(10) << ficaTax << endl;
        cout << "Net Pay: " << setw(42) << '$' << setw(10) << netPay << endl;
        cout << endl;
        
        do
        {
            cout << "Enter a valid employee number, or enter 0 to quit.\n";
            cin >> empNum;
        }while(empNum < 0);
    }
        
    return 0;
}
//empNum = 00110015 (19) 0 (65), grossPay 43650 (29), fedTax 5000 (35), stateTax 2500
//(41), ficaTax 3200 (47), netPay 32950 (50).