#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141593;

struct C2dType {
	double x, y;
};//세미콜론!! && 순서!!C2dType을 먼저 선언해야한다!
struct CircleType {
	C2dType center;
	double radius;
};

double circleArea(CircleType c)
{
	return c.radius * c.radius * PI;
}

bool chkOverlap(CircleType c1, CircleType c2)
{
	double dx = c1.center.x - c2.center.x;
	double dy = c1.center.y - c2.center.y;
	double dCntr = sqrt(dx * dx + dy * dy);
	return dCntr < c1.radius + c2.radius;

}
void dispCircle(CircleType c)
{
	cout << "중심: (" << c.center.x << "," << c.center.y << ")" << endl;
	cout << "반경: " << c.radius << endl;
}
void main()
{
	CircleType c1 = { {0,0}, 10 };
	CircleType c2 = { {30,10}, 5 };
	cout << "원1!" << endl;
	dispCircle(c1);
	cout << "원1의 면적: " << circleArea(c1) << endl;
	cout << "원2!" << endl;
	dispCircle(c2);
	cout << "원2의 면적: " << circleArea(c2) << endl;
	if (chkOverlap(c1, c2))	
		cout << "중첩한다" << endl;
	else 
		cout << "중첩안한다" << endl;
}