//Paxston Gulledge
//Week 3 Assignment 3 Exercise 1
//Use recursion to create star pattern

#include "stdafx.h"
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

//the number initial set to go to
int starNumber = 0;
//a copy of starNumber to retain for finishing the program
int starMax = 0;
//Flag to turn reverse on
bool reverseFormat = false;
//Flag to finish
bool finished = false;

void StarFormat();

int main()
{
	cout << "Please enter a nonnegative integer." << endl;
	cin >> starNumber;
	starMax = starNumber;
	StarFormat();
	// Force the console to stay open until a key is pressed
	cout << endl;
	system("pause");
	return 0;
}

void StarFormat()
{
	//As long as finished is not true this will run
	if (!finished)
	{
		//If we aren't in reverse then we create the stars counting down
		if (!reverseFormat)
		{
			for (int i = 0; i < starNumber; i++)
			{
				cout << "*";
			}
			//after we've put the appropriate amount of asterisks we end line, drop the number by 1, and check to see if it is 1, if it is 1 we add the ones
			//and reverse the flow
			cout << endl;
			starNumber--;
			if (starNumber == 1)
			{
				reverseFormat = true;
				cout << "*" << endl << "*" << endl;
			}
			StarFormat();
		}
		else if (reverseFormat)
		{
			for (int i = 0; i <= starNumber; i++)
			{
				cout << "*";
			}
			cout << endl;
			starNumber++;
			//at this point if we reach the original, we set finished to true and the program is finished.
			if (starNumber == starMax)
			{
				finished = true;
			}
			StarFormat();
		}
	}
}

