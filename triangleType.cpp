
#include <iostream>
#include <cmath>

struct Point
{
    Point(const double xValue = 0, const double yValue = 0)
    : x(xValue)
    , y(yValue) 
    {} 


	double x;
    double y;
};


void triangleType(const Point &p1, const Point &p2, const Point &p3)
{
	double side1Square = (std::abs((p1.x - p2.x) * (p1.x - p2.x)) + std::abs((p1.y - p2.y) * (p1.y - p2.y))); 
	double side2Square = (std::abs((p2.x - p3.x) * (p2.x - p3.x)) + std::abs((p2.y - p3.y) * (p2.y - p3.y))); 
	double side3Square = (std::abs((p1.x - p3.x) * (p1.x - p3.x)) + std::abs((p1.y - p3.y) * (p1.y - p3.y))); 

	double max = side3Square;
	if(side1Square > max)
	{
		max = side1Square;
		side1Square = side3Square;
		side3Square = max;
	}

	if(side2Square > max)
	{
		max = side2Square;
		side2Square = side3Square;
		side3Square = max;
	}

	if(side3Square == side1Square + side2Square)
	{
		std::cout << "Right Triangle\n";
	} 
	else if(side3Square < side1Square + side2Square)
	{
		std::cout << "Acute Triangle\n";
	}
	else if(side3Square > side1Square + side2Square)
	{
		std::cout << "Obtuse Triangle\n";
	} 
}

int main()
{
	Point p1(7, 41);
	Point p2(10, -5);
	Point p3(-13, -5);
	triangleType(p1, p2, p3);
}
