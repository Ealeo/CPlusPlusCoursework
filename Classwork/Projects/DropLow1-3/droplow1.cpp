//comment
#include <iostream>
#include <iomanip>
using namespace std;
void getScores(int &, int &, int &);
int findLowest(int, int, int);
double process(int, int, int, int, double &);
void display(int, int, int, int, double);

int main()
{
	int sc1,
		sc2,
		sc3,
		low;
	
	double avg;
	
	getScores (sc1, sc2, sc3);
	low = findLowest(sc1, sc2, sc3);
	process(sc1, sc2, sc3, low, avg);
	display(sc1, sc2, sc3, low, avg);
	
	return 0;
}

void getScores(int & score1, int & score2, int & score3)
{
	do
	{
		cout << "Enter Quiz 1: \n";
		cin >> score1;
	}while(score1 < 0 || score1 > 100);
	
		do
	{
		cout << "Enter Quiz 2: \n";
		cin >> score2;
	}while(score2 < 0 || score2 > 100);
	
		do
	{
		cout << "Enter Quiz 3: \n";
		cin >> score3;
	}while(score3 < 0 || score3 > 100);
}

int findLowest(int score1, int score2, int score3)
{
	int holder = score1;
	if(score2 < holder)
		holder = score2;
	if(score3 < holder)
	holder = score3;
	return holder;
}

double process(int score1, int score2, int score3, int low, double & average)
{
	average = (score1 + score2 + score3 - low) / 2.0;
}
void display(int score1, int score2, int score3, int low, double average)
{
	cout << endl;
	cout << showpoint << fixed << setprecision(2);
	cout << "Quiz Score 1: " << setw(37) << score1 << endl;
	cout << "Quiz Score 2: " << setw(37) << score2 << endl;
	cout << "Quiz Score 3: " << setw(37) << score3 << endl;
	cout << "Lowest Score: " << setw(37) << low << endl;
	cout << "Average: " << setw(42) << average << endl;
}
//Output:
//Enter Quiz 1:
//100
//Enter Quiz 2:
//99
//Enter Quiz 3:
//0

//Quiz Score 1:                                   100
//Quiz Score 2:                                    99
//Quiz Score 3:                                     0
//Lowest Score:                                     0
//Average:                                      99.50