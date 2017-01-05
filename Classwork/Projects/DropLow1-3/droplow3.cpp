//comment
#include <iostream>
#include <iomanip>
using namespace std;
void getScores(int[][4], int);
void findLowest(int[][4], int, int[]);
void calcAvg(int[][4], int, int[], double []);
void display(int[][4], int, int[], double[]);
int main()
{
	int sc[3][4],
		low[3];
		
	double avg[3];
	
	getScores(sc, 3);
	findLowest(sc, 3, low);
	calcAvg(sc, 3, low, avg);
    display(sc, 3, low, avg);
	
	return 0;
}

void getScores(int scores[][4], int rows)
{
	for(int r=0; r < rows; r++)
	{	
		for(int c=0; c < 4; c++)
		{
			do
			{
				cout << "Enter quiz " << c + 1 << " for student " << r + 1 << ": \n";
				cin >> scores[r][c];
			}while(scores[r][c] < 0 || scores[r][c] > 100);
		}
	}
}

void findLowest(int scores[][4], int rows, int lowest[])
{
	for(int r=0; r < rows; r++)
	{
		lowest[r] = scores[r][0];
		for(int c=1; c < 4; c++)
		{
			if(scores[r][c] < lowest[r])
			{
				lowest[r] = scores[r][c];
			}
		}
	}
}
void calcAvg(int scores[][4], int rows, int lowest[], double average[])
{
    for(int r=0; r < rows; r++)
    {
        int tot=0;
        for(int c=0; c < 4; c++)
        {
            tot += scores[r][c];
        }
        average[r] = (tot - lowest[r])/3.0;
    }
}

void display(int scores[][4], int rows, int lowest[], double average[])
{
    for (int r=0; r < rows; r++)
    {
        for(int c=0; c < 4; c++)
        {
            cout << "Quiz " << c + 1 << " for student " << r + 1 << ": " << scores[r][c] << endl;
        }
        cout << "Lowest score for student " << r + 1 << ": " << lowest[r] << endl;
        cout << "Average for student " << r + 1 << ": " << average[r] << endl;
    }
}
//Enter quiz 1 for student 1:
//500
//Enter quiz 1 for student 1:
//100
//Enter quiz 2 for student 1:
//50
//Enter quiz 3 for student 1:
//87
//Enter quiz 4 for student 1:
//90
//Enter quiz 1 for student 2:
//86
//Enter quiz 2 for student 2:
//78
//Enter quiz 3 for student 2:
//100
//Enter quiz 4 for student 2:
//100
//Enter quiz 1 for student 3:
//99
//Enter quiz 2 for student 3:
//100
//Enter quiz 3 for student 3:
//100
//Enter quiz 4 for student 3:
//99
//Quiz 1 for student 1: 100
//Quiz 2 for student 1: 50
//Quiz 3 for student 1: 87
//Quiz 4 for student 1: 90
//Lowest score for student 1: 50
//Average for student 1: 92.3333
//Quiz 1 for student 2: 86
//Quiz 2 for student 2: 78
//Quiz 3 for student 2: 100
//Quiz 4 for student 2: 100
//Lowest score for student 2: 78
//Average for student 2: 95.3333
//Quiz 1 for student 3: 99
//Quiz 2 for student 3: 100
//Quiz 3 for student 3: 100
//Quiz 4 for student 3: 99
//Lowest score for student 3: 99
//Average for student 3: 99.6667