#include <iostream>
#include "�ҽ��ڵ�4-1.h"
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

