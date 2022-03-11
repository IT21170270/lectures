#pragma once
class Employee
{
private:
	int empno;
	char name[20];
	double basicSal;
	double allowance;
	double salary;
	double OTrate;
	double OTsal;
	double hours;

public:
	void assignDetails();
	void setAllowance();
	void calcsal();
	void printpaySlip();
	void setOTDetails();

};

