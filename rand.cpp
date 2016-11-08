// zadgalq.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;


int main()
{
	int aComp, bComp, cComp, dComp;
	int difDigits = 0;
	do
	{
		srand(time(NULL));
		int compNum = rand() % 9000 + 1000;
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
			cout << compNum << endl;
		}
	} 
	while (difDigits != 1);
	return 0;
}

