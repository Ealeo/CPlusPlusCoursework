//This program uses a static local variable.
#include <iostream>
using namespace std;
void showStatic();//Function prototype.

int main()
{
	for (int count = 0; count < 5; count++);
		showStatic();
	return 0;
}

void showStatic()
{
	static int statNum;
	
	cout << "Statnum is" << statNum << endl;
	statNum++;
}
