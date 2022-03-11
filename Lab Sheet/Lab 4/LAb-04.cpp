#include <iostream>
#include "Shapearea.h"
#include <iomanip>

using namespace std;

int main(void)
{
	float c1Area, rLArea, rSArea, s1Area;
	float greenArea , costUnit , perimeter , finalCost;

	// Create structure variables
	Circle c1;
	Rectangle rL, rS;
	Square s1;

	// Input Data for pound
	cout << "input the Radious of the circle : ";
	cin >> c1.radius;
	cout << endl;

	//input data for small rectangle
	cout << "input the Length of the small rectangle : ";
	cin >> rS.length;
	cout << "input the width of the small rectangle : ";
	cin >> rS.width;
	cout << endl;

	//input data for large rectangle
	cout << "input the Length of the big rectangle : ";
	cin >> rL.length;
	cout << "input the width of the big rectangle : ";
	cin >> rL.width;
	cout << endl;

	//input data for square
	cout << "input the length of Square : ";
	cin >> s1.length;
	cout << endl;

	//input 1 meter cost in the fance
	cout << "The cost per unit(in meters) : RS:";
	cin >> costUnit;
	cout << endl;


	// Calculate Area
	c1Area = areaCircle(c1);
	rLArea = areaRectangle(rL);
	rSArea = areaRectangle(rS);
	s1Area = areaSquare(s1);
	greenArea = rLArea - (rSArea + c1Area + s1Area);

	//find perimeter of the area
	perimeter = recPerimeter(rL);

	//calculate final cost for fixed a fence
	finalCost = findCost(perimeter, costUnit);

	// Print Result
	cout << "Green Area : " << setiosflags (ios::fixed) << setprecision(3) << greenArea << endl;
	cout << "Perimeter of Yard : " << setprecision(3) << perimeter  << endl;
	cout << "cost for fixed a fence = RS:" << setprecision(2) << finalCost << endl;

	return 0;
}

