/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: PayStub
 * This program calculates and prints a monthly paycheck.
 */

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string strName = "";
	double dblGrossAmount = 2000.00;
	double dblFederalTax = 575.34;
	double dblStateTax = 0.00;
	double dblNetPay = 1424.66;

	cout << "What is your name?" << endl;
	cin >> strName;
	cout << "What is your gross earning?" << endl;
	cin >> dblGrossAmount;

	dblNetPay = dblGrossAmount - dblFederalTax - dblStateTax;

	cout << strName << endl;
	cout << "Gross Amount: ... $" << dblGrossAmount << endl;
	cout << "Federal Tax: .... $" << dblFederalTax << endl;
	cout << "State Tax: ...... $" << dblStateTax << endl;
	cout << " ... " << endl;
	cout << "Net Pay: ........ $" << dblNetPay << endl;
    return 0;
}

