//This program is designed to calculate the revenue generated from tickets sold at a minor league baseball game.
//aTickets = 15$, bTickets = 12$, cTickets = 9$.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const float APRICE = 15.00f,
                BPRICE = 12.00f,
                CPRICE = 9.00f;
		
	short aSold,
		  bSold,
          cSold;
	
	float aRev,
		  bRev,
		  cRev,
          tRev;
		
	cout << endl;
	cout << "How many A Tickets were sold?";
	cin >> aSold;
	cout << "How many B Tickets were sold?";
	cin >> bSold;
	cout << "How many C Tickets were sold?";
	cin >> cSold;
	
	aRev = aSold * APRICE;
	bRev = bSold * BPRICE;
	cRev = cSold * CPRICE;
	tRev = aRev + bRev + cRev;
	
    cout << endl;
    cout << fixed << showpoint << setprecision(2);
	cout << "Revenue Generated from A Tickets:" << setw(17) << '$' << setw(10) << aRev << endl;
	cout << "Revenue Generated from B Tickets:" << setw(17) << '$' << setw(10) << bRev << endl;
	cout << "Revenue Generated from C Tickets:" << setw(17) << '$' << setw(10) << cRev << endl;
	cout << "Total Revenue Generated:" << setw(26) << '$' << setw(10) << tRev << endl;
	cout << endl;
	
	return 0;
	
}
//aSold: 255 (24) bSold: 145 (26) cSold: 59 (28) Total Revenue Generated: $6096.00 (33)
