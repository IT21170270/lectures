#pragma once

struct Circle {
	float radius;
};

struct Rectangle {
	float length;
	float width;
};

struct Square {
	float length;
};

float areaCircle(Circle c);
float areaRectangle(Rectangle r);
float areaSquare(Square s);
float recPerimeter(Rectangle r);
float findCost(float perimeter, float costUnit);


