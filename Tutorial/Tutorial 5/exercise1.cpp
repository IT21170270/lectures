//Exercise 1 – Memory Address
#include <iostream>

using namespace std ;

int main(void)
{
	float number1 = 6.2 ;
	float number2 = 7.3 ;
	
	//question 1
	float *fptr ;
	
	//question 2
	fptr = &number1 ;
	
	//question 3
	cout <<  *fptr  ;
	
	//question 4
	number2 = *fptr ;
	
	//question 5
	cout << endl << number2  ;
	
	//question 6
	cout << endl << &number1  ;
	
	////question 7
	cout << endl << fptr  ;
	//final answer of 7 is yes(value printed the same as the address of number1)
	
	return 0 ;
}
