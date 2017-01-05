//This program demonstrates the program droplow using arrays.
#include <iostream>
#include <iomanip>
using namespace std;
void getScores(int [], int);
int findLowest(int [], int);
double calcAvg(int[], int, int);
void display(int[], int, int, double);

int main()
{
    int sc[4],
        low;
    
    double avg;
    
    getScores(sc, 4);
    low = findLowest(sc, 4);
    avg = calcAvg(sc, 4, low);
    display(sc, 4, low, avg);
    
    return 0;
}

void getScores(int score[], int size)
{
    for(int x = 0; x < 4; x++)
    {
        cout << "Enter score " << x + 1 << ":\n";
        cin >> score[x];
    }
}

int findLowest(int test[], int size)
{
    int holder = test[0];
    for (int x = 1; x < 4; x++)
    {
        if(test[x] < holder)
        {
            holder = test[x];
        }
    }
    return holder;
}

double calcAvg(int scores[], int size, int low)
{
    int tot = scores[0];
    for (int x = 1; x < size; x++)
    {
        tot += scores[x];
    }
    return (tot - low) / (size - 1.0);
}

void display(int scores[], int size, int low, double avg)
{
    for(int x = 0; x < size; x++)
    {
        cout << "Score " << x + 1 << ":" << scores[x] << endl;
    }
    cout << "The lowest score is: " << low << endl;
    cout << "The average is: " << avg << endl;
    cout << endl;
}
//Enter score 1:
//60
//Enter score 2:
//93
//Enter score 3:
//87
//Enter score 4:
//99
//Score 1:60
//Score 2:93
//Score 3:87
//Score 4:99
//The lowest score is: 60
//The average is: 93