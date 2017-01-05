//hamburger
#include <iostream>
using namespace std;

int main()
{
	int num;
	double pr, cst;
		
	cout << "How many burgers were sold?";
	cin >> num;
	cout << "How much per burger?";
	cin >> pr;
	
	cst = num * pr
	
	cout << "Burgers purchased: " << num << endl;
	cout << "Price per burger: " << pr << endl;
	cout << "Total cost: " << cst << endl;
	
	return 0;
}