#include "Employee.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
//int main (void)
{
	Employee emp1;
	int iempno;
	char iname[20];
	double bsal;

	emp1.assignDetails();
	emp1.setAllowance();
	emp1.setOTDetails();
	emp1.calcsal();
	emp1.printpaySlip();

	return 0;
}

