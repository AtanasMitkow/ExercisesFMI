// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	// Zadacha 1:
	cout << "Zadacha 1" << endl;
	cout << "------------------------------------------------------" << endl;

	int firstNum, secondNum, endResult;
	char operation;
	cout << "Wuwedete purwo chislo:";
	cin >> firstNum;
	cout << "Wuwedete wtoro chislo:";
	cin >> secondNum;
	cout << "Wuwedete operaciq ( + , - , / , % , *): ";
	cin >> operation;
	switch (operation)
	{
		case '+':
		endResult = firstNum + secondNum;
		cout << endResult << endl;
		break;
		case '-': endResult = firstNum - secondNum;
		cout << endResult << endl;
		break;
		case '/': endResult = firstNum / secondNum;
		cout << endResult << endl;
		break;
		case '%': endResult = firstNum%secondNum;
		cout << endResult << endl;
		break;
		case '*': endResult = firstNum*secondNum;
		cout << endResult << endl;
		break;
	default: cout << "Greshka: Nevalidna operaciq!" << endl;
	}
    
	//	Zadacha 2:
	cout << endl << "Zadacha 2" << endl;
	cout << "------------------------------------------------------" << endl;

	int number;
	cout << "Wuwedete chislo: ";
	cin >> number;

	switch(number % 2)
	{
	case 0:
	cout << "chisloto se deli na 2" << endl;
	break;

	}
	switch(number % 3)
	{
	case 0:
	cout << "chisloto se deli na 3" << endl;
	break;

	}
	switch(number % 4)
	{
	case 0:
	cout << "chisloto se deli na 4" << endl;
	break;

	}
	switch(number %5)
	{
	case 0:
	cout << "chisloto se deli na 5" << endl;
	break;

	}
	switch(number % 6)
	{
	case 0:
	cout << "chisloto se deli na 6" << endl;
	break;

	}
	switch(number % 7)
	{
	case 0:
	cout << "chisloto se deli na 7" << endl;
	break;

	}
	switch(number % 8)
	{
	case 0:
	cout << "chisloto se deli na 8" << endl;
	break;

	}
	switch(number % 9)
	{
	case 0:
	cout << "chisloto se deli na 9" << endl;
	break;

	}
	switch(number % 10)
	{
	case 0:
	cout << "chisloto se deli na 10" << endl;
	break;

	}

	// Zadacha 3
	cout << endl << "Zadacha 3" << endl;
	cout << "------------------------------------------------------" << endl;

	int a,b,c,P,S,h,figura,r,d;
	double Po, So; //za okrujnostta
	const double pi = 3.14;
	cout << "Molq izberete figura ( 1 - triugulnik, 2 - kwadrat, 3 - okrujnost, 4 - prawougulnik, 5 - trapec):";
	cin >> figura;
	switch(figura)
	{
		case 1:
		cout << "Wwuwedete a,b,c" << endl;
		cin >> a >> b >> c;
		cout << "Wuwedete wisochina sreshtu strana a" << endl;
		cin >> h;
		P = a + b + c;
		S = (a*h)/2;
		cout << "P = " << P << endl;
		cout << "S = " << S << endl;
		break;
		case 2:
		cout << "Wwuwedete a" << endl;
		cin >> a;
		P = 4*a;
		S = pow(a,2);
		cout << "P = " << P << endl;
		cout << "S = " << S << endl;
		break;
		case 3:
		cout << "Wwuwedete r" << endl;
		cin >> r;
		Po = 2 * pi * r;
		So = pi * r * r;
		cout << "P (priblizitelno) = " << Po << endl;
		cout << "S (priblizitelno) = " << So << endl;
		break;
		case 4:
		cout << "Wuwedete a , b" << endl;
		cin >> a >> b ;
		P = 2*a + 2*b;
		S = a*b;
		cout << "P = " << P << endl;
		cout << "S = " << S << endl;
		break;
		case 5:
		cout << "Wuwedete a,b,c,d" << endl;
		cin >> a >> b >> c >> d;
		cout << "Wuwedete wisochina" << endl;
		cin >> h;
		P = a + b + c + d;
		S = ((a+b)*h)/2;
		cout << "P = " << P << endl;
		cout << "S = " << S << endl;
		break;
		default: cout << "Ne ste wuweli prawilna figura" << endl;
	break;
	} 

	// Zadacha 4
	cout << endl << "Zadacha 3" << endl;
	cout << "------------------------------------------------------" << endl;

	int aNum, methodNum;
	long double answer;
	cout << "Izberete metod na reshenie (1,2,3,4): ";
	cin >> methodNum;
	cout << "Wuwedete realno chislo x: ";
	cin >> aNum;
	switch (methodNum) 
	{
		case 1:
			answer = aNum - 5;
			cout << "y = x - 5 = " << answer << endl;
			break;
		case 2:
			answer = sin(aNum);
			cout << "sin(x) = " << answer << endl;
			break;
		case 3:
			answer = cos(aNum);
			cout << "cos(x) = " << answer << endl;
			break;
		case 4:
			answer = exp(aNum);
			cout << "exp(x) = " << answer << endl;
			break;
		default: cout << "Molq wuwedete chislo ot 1 do 4";
	}
	
	return 0;
}

