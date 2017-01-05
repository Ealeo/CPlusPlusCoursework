//This is a program to determine a player’s hitting average.

#include<iostream>
using namespace std;

int main()
{
	int hits, atbats;
	float avg;

	//Get the number of at bats.
	cout << "How many times did you bat today?";
	cin >> atbats;

	//Get the number of times the player got a hit while at bat.
	cout << "How many hits did you get today?";
	cin >> hits;

	//Calculate the player’s hitting average.
	avg = (float) hits / atbats;
    
    //Display the average.
    cout << "Average:" << avg;

    
    return 0;
}