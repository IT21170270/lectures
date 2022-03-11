#include "Employee.h"
#include <iostream>

using namespace std;

int main(int argc , char* argv[])
//int main (void)
{
	Employee emp1;
	int iempno;
	char iname[20];
	double bsal;

	emp1.assignDetails(10 , "wimal", 50000);
	emp1.setAllowance(5000);
	emp1.setOTDetails(10, 5);
	emp1.calcsal();
	emp1.printpaySlip();

	return 0;
}

