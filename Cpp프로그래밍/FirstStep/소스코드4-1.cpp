#include <iostream>
#include "소스코드4-1.h"
using namespace std;

int main()
{
	Counter c;
	c.reset();
	cout << c.getValue();
	c.count();
	c.count();
	cout << c.getValue();
	return 0;
}

