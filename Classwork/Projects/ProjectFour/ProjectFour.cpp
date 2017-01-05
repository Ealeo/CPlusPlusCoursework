//This program will calculate the gross, net and distributor fee for a movie theater.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int aSold,
		cSold;
	
	float const    APRICE = 6.00,
				   CPRICE = 3.00;
				   
	float grossProf,
		  distribFee,
		  netProf;
		  
	string movieName;
	
	cout << endl;
	cout << "What is the name of the movie?";
    getline(cin,movieName);
	cout << "How many Adult Tickets were sold?";
	cin >> aSold;
	cout << "How many Children Tickets were sold?";
	cin >> cSold;
	
	grossProf = (APRICE * aSold) + (CPRICE * cSold);
	netProf = grossProf * 0.20;
	distribFee = grossProf * 0.80;
	
	cout << endl;
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Movie Title: " << setw(48) << movieName << endl;
	cout << "Adult Tickets Sold: " << setw(41) << aSold << endl;
	cout << "Children Tickets Sold: " << setw(38) << cSold << endl;
    cout << "Gross Profit: " << setw(37) << '$' << setw(10) << grossProf << endl;
    cout << "Net Profit: " << setw(39) << '$' << setw(10) << netProf << endl;
    cout << "Distributor Fee: " << setw(34) << '$' << setw(10) << distribFee << endl;
    cout << endl;
    
    return 0;
}
//movieName = Sharknado (23), aSold = 225 (25), cSold = 163 (27), grossProf = $1839.00 (29), netProf = $367.80 (30), distribFee = $1471.20 (31)