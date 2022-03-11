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
	void assignDetails(int pempno, const char pname[], double pbasicSal);
	void setAllowance(double pallowance);
	void calcsal();
	void printpaySlip();
	void setOTDetails(double pOTrate, double phours);

};

