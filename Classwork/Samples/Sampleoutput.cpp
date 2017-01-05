//
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outputFile;
	outputFile.open("Sample.txt");
    
	cout << "Now writing to the file.";
    
	outputFile << "Hello\n";
	outputFile << "Hi\n";
	outputFile << "Hola\n";
    
	cout << "Done writing to file.";
    
	outputFile.close();
	
	return 0;
}
