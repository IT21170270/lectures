#include <iostream>
#include "shapeArea.h"

using namespace std;

float areaCircle(Circle c)
{
	return (22 / 7.0 * c.radius * c.radius);
}
float areaRectangle(Rectangle r)
{
	return (r.length * r.width);
}
float areaSquare(Square s)
{
	return (s.length * s.length);
}

float recPerimeter(Rectangle r)
{
	return (r.length + r.width) * 2.0;
}
float findCost(float perimeter, float costUnit)
{
	return ( perimeter * costUnit );
}

