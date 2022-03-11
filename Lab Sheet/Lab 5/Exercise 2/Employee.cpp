#include "Employee.h"
#include <iostream>
#include <cstring>

using namespace std;

void Employee::assignDetails(int pempno, const char pname[], double pbasicSal)
{
	empno = pempno;
	strcpy_s(name, pname);
	basicSal = pbasicSal;
}

void Employee::setAllowance(double pallowance)
{
	allowance = pallowance;
}
void Employee::calcsal()
{
	OTsal = OTrate * hours;
	salary = OTsal + basicSal + allowance;
}
void Employee::printpaySlip()
{
	cout << "-----------------------------" << endl;
	cout << "Emp No \t\t : " << empno << endl ;
	cout << "Name \t\t:" << name << endl;
	cout << "Basic Salary\t :" << basicSal << endl;
	cout << "OT amount \t:" << OTsal << endl;
	cout << "Allowance \t:" << allowance << endl;
	cout << "Net Salary \t:" << salary << endl;
	cout << "-----------------------------" << endl;
}
void Employee::setOTDetails(double pOTrate, double phours)
{
	OTrate = pOTrate;
	hours = phours;

}
