//comment
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x,
		y,
		z;
		
	cout << "Enter a value for x:";
	cin >> x;
	cout << "Enter a value for y:";
	cin >> y;
	cout << "Enter a value for z:";
	cin >> z;
	
	cout << "The sum is " << sum(x, y, z);
}

int sum(int num1, int num2)
{
	return num1 + num2;
}

int sum(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}