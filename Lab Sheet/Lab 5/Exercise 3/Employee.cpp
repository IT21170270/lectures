#include "Employee.h"
#include <iostream>
#include <cstring>

using namespace std;

void Employee::assignDetails()
{
	cout << "Enter Employee No : " << flush;
	cin >> empno;
	cout << "Ente Name : " << flush;
	cin >> name;
	cout << "Enter Basic Salary : " << flush;
	cin >> basicSal;
}

void Employee::setAllowance()
{
	cout << "Enter Allowance : " << flush;
	cin >> allowance;
}
void Employee::calcsal()
{
	OTsal = OTrate * hours;
	salary = OTsal + basicSal + allowance;
}
void Employee::printpaySlip()
{
	cout << "-----------------------------" << endl;
	cout << "Emp No \t\t : " << empno << endl;
	cout << "Name \t\t:" << name << endl;
	cout << "Basic Salary\t :" << basicSal << endl;
	cout << "OT amount \t:" << OTsal << endl;
	cout << "Allowance \t:" << allowance << endl;
	cout << "Net Salary \t:" << salary << endl;
	cout << "-----------------------------" << endl;
}
void Employee::setOTDetails()
{
	cout << "Enter OT Rate : " << flush;
	cin >> OTrate;
	cout << "Enter OT Hours : " << flush;
	cin >> hours;

}
