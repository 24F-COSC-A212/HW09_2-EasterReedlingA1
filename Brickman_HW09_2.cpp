// Brickman_HW09_2.cpp
// This program will print out a read file chosen by you line by line, each numbered.
// Simon Brickman
// October 17, 2024
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    ifstream inFile;
    char inName[200];
    string inputLine = "";
    int lineNumber = 1;
    cout << endl << "Enter the input file name... ";
    cin >> inName;
    inFile.open(inName);
    if (!inFile)
    {
        cout << endl << "Error opening file " << inName << endl << endl;
        return 9;
    }
    while (!inFile.eof())
    {
        getline(inFile, inputLine, '\n');
        cout << setw(4) << right << lineNumber << 
        ": " << inputLine << endl;
        lineNumber++;
    }
    inFile.close();
    return 0;
}