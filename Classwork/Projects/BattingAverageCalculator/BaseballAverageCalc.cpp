//This program is designed to calculate John's batting average on the Summer baseball team.
#include <iostream>
using namespace std;

int main()
{
	int Atbats , Hits;
	float Average;
	
	cout << "How many times did you bat this past season?";
	cin >> Atbats;
	cout << "How many hits did you get this past season?";
	cin >> Hits;
	
	Average = (float)Hits / Atbats;
	
	//Display the Average
	
	cout << endl;
	cout << "Amount of at bats: " << Atbats << endl;
	cout << "Number of hits: "	<< Hits << endl;
	cout << "Average: " << Average << endl;
	cout << endl;

	return 0;
}

//Atbats: 28 (11) ; Hits: 12 (13) ; Average: 0.428571 (15)
