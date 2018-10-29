#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592;
struct C2Type
{
	double x, y;
};

class CircleClass
{
	C2Type center;
	double radius;


public :
	void init(double x, double y, double r)
	{
		center.x = x;
		center.y = y;
		radius = r;
	}

	double area()
	{
		return radius * radius * PI;
	}
	void display()
	{
	}
};
int main()
{
	CircleClass c1; 
	CircleClass c2;
	c1.init(1, 2, 1);

	return 0;
}