//Exercise 2 – Pointer Manipulation
#include <iostream>

using namespace std ;

int main (void)
{
	//question no : 1
	float num1 , num2 ;
	
	//question no : 2
	cout << "Enter the value for num2 : ";
	cin >> num2 ;
	
	//question no : 3
	float *ptr1 , *ptr2 ;
	
	//question no : 4
	ptr1 = &num1 ;
	ptr2 = &num2 ;
	
	//question no : 5
	*ptr1 += 7.8 ;
	
	//question no : 6
	*ptr2 -= 14.2 ;
	
	//question no : 7
	cout << endl << "num1 = " << *ptr1 ;
	cout << endl << "num2 = " << *ptr2 ;
	
	//question no : 8
	cout << endl << "multipication is(using variable) = " <<  num1 + num2 ;
	cout << endl << "multipication is(using pointer) = " <<  *ptr1 + *ptr2 ;
	
	return 0 ;
}
