//This program calculates a student's average over three quizzes.
#include <iostream>
using namespace std;
int main()

{
	int score1, score2, score3;
		float average;
		
		cout << "Enter Quiz 1:";
		cin >> score1;
		cout << "Enter Quiz 2:";
		cin >> score2;
		cout << "Enter Quiz 3:";
		cin >> score3;
		
        average = (score1 + score2 + score3) / 3.0;
		
		cout << endl;
		cout << "Quiz 1:" << score1 << endl;
		cout << "Quiz 2:" << score2 << endl;
		cout << "Quiz 3:" << score3 << endl;
		cout << "Average:" << average;
		
		return 0;
}