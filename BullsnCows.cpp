// BullsnCows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <ctype.h>
using namespace std;


int main()
{
	int userInput, compNum;
	char aComp, bComp, cComp, dComp, aUser, bUser, cUser, dUser;
	int cows = 0;
	int bulls = 0;
	
	//Random generated 4  digit number
	int difDigits = 0;
	
	do
	{
		srand(time(NULL));
		compNum = rand() % 9000 + 1000;
		dComp = compNum % 10;
		cComp = (compNum / 10) % 10;
		bComp = (compNum / 100) % 10;
		aComp = compNum / 1000;
		if (aComp == bComp || aComp == cComp || aComp == dComp || bComp == cComp || bComp == dComp || cComp == dComp)
		{
			difDigits = 0;
		}
		else
		{
			difDigits = 1;
			cout << "The computer number is: " << compNum << endl; // Added for clarity
		}
	} while (difDigits != 1);

	//User input check
	int error = 0;
	do
	{
		cout << "Insert your 4 digit number here: ";
		cin >> userInput;
		dUser = userInput % 10;
		cUser = (userInput / 10) % 10;
		bUser = (userInput / 100) % 10;
		aUser = userInput / 1000;
		
		if (aUser == bUser || aUser == cUser || aUser == dUser || bUser == cUser || bUser == dUser || cUser == dUser)
		{
			cout << "Invalid number! Your number has equal digits!" << endl;
		}
		else
		{
			//bulls
			if (aComp == aUser)
			{
				bulls += 1;
			} 
			 if (bComp == bUser)
			{
				bulls += 1;
			}
			if (cComp == cUser)
			{
				bulls += 1;
			}
			if (dComp == dUser)
			{
				bulls += 1;
			}
			//cows
			if (aComp == bUser || aComp == cUser || aComp == dUser)
			{
				cows += 1;
			}
			if (bComp == aUser || bComp == cUser || bComp == dUser)
			{
				cows += 1;
			}
			if (cComp == aUser || cComp == bUser || cComp == dUser)
			{
				cows += 1;
			}
			if (dComp == aUser || dComp == bUser || dComp == cUser)
			{
				cows += 1;
			}
			
			if (bulls != 4)
			{
				cout << "You have " << bulls << " bulls " << "and " << cows << " cows" << endl;
			}
			bulls = 0;
			cows = 0;
		}
		
	} while (compNum != userInput);
	
	//Win condition
	if (compNum = userInput)
	{
		cout << "Congratulations! You've finally won!" << endl;
	}


		return 0;
}