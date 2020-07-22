//Hamburger using procedures.
#include <iostream>
using namespace std;
void getData(int &, double &);
void process(int, double, double &);
void display(int, double, double);

int main()
{
	int num;
	double pr, cst;
	
	getData(num, pr);
	process(num, pr, cst);
	display(num, pr, cst);
	
	return 0;
}

void getData(int & number, double & price)
{
	cout << "How many burgers were sold?";
	cin >> number;
	cout << "How much per burger?";
	cin >> price;
}

void process(int number, double price, double & cost)
{
	cost = number * price;
}

void display(int number, double price, double cost)
{
	cout << "Burgers sold: " << number << endl;
	cout << "Price per burger: " << price << endl;
	cout << "Total cost: " << cost << endl;
}
// main
// num          pr          cst
// 10 g3        .5 g5      5.00 p2
//getData
//
//process
//number        price
// 10 p1        .5 p1
//
//display
//number        price       cost
// 10 d1         .5 d1       5.00 d1
