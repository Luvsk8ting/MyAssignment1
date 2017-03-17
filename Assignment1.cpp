//Assignment1.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	double beginBal = 0;
	double endBal = 0;
	double endingBalance = 0;
	char trans = ('W', 'D', 'C');
	double eBal = 0;
	double wAmt = 0;
	double wSTotal = 0;
	double wTotal = 0;
	double dAmt = 0;
	double dSTotal = 0;
	double dTotal = 0;
	double cAmt = 0;
	double cSTotal = 0;
	double cTotal = 0;
	double totalW = 0;
	double totalD = 0;
	double totalC = 0;
	char ans = ('N', 'Y');

	cout << " Please enter account balance " << endl;
	cin >> beginBal;
	cout << "Enter transactions: " << endl;
	cout << "--------------------" << endl;

	cout << " (W)ithdrawal, (D)eposit, (C)heck, (Q)uit " << endl;
	cin >> trans;
	// local variable declaration:
	do {
		switch (trans)
		{
		case 'W':
			do {
				cout << "Please enter withdrawal amount " << endl;
				cin >> wAmt;
				wSTotal = +wTotal;
				wTotal = wSTotal + wAmt;
				cout << "Would you like to enter another withdrawl (Y/N) " << endl;
				cin >> ans;
			} while (ans == 'Y' || ans == 'y');
			cout << "Total withdrawals are: " << wTotal << endl;
			cout << "(W)ithdrawal, (D)eposit, (C)heck, (Q)uit" << endl;
			cin >> trans;
		case 'D':
			do {
				cout << "Please enter deposit amount " << endl;
				cin >> dAmt;
				dSTotal = +dTotal;
				dTotal = dSTotal + dAmt;
				cout << "Would you like to enter another deposit (Y/N) " << endl;
				cin >> ans;
			} while (ans == 'Y' || ans == 'y');
			cout << "Total deposits are: " << dTotal << endl;
			cout << "Would you like to enter another transaction? " << endl;
			cout << "(W)ithdrawal, (D)eposit, (C)heck, (Q)uit" << endl; 
			cin >> trans;
		case 'C':
			do {
				cout << "Please enter check amount " << endl;
				cin >> cAmt;
				cSTotal = +cTotal;
				cTotal = cSTotal + cAmt;
				cout << "Would you like to enter another check (Y/N) " << endl;
				cin >> ans;
			} while (ans == 'Y' || ans == 'y');
			cout << "Total checks are: " << cTotal << endl;
			cout << "Would you like to enter another transaction? " << endl;
			cout << "(W)ithdrawal, (D)eposit, (C)heck, (Q)uit" << endl;
			cin >> trans;
		case 'Q':
			break;
		default:
			cout << "Invalid transaction" << endl;
			return 0;
		}
	} while (ans == 'Y' || ans == 'n');
		endingBalance = beginBal - wTotal + dTotal - cTotal;
	cout << "--------------------" << endl;
	cout << "The Ending Balance is : " << endingBalance << endl;
	cout << "--------------------" << endl;
};
