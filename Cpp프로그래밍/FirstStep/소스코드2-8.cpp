#include <iostream>
using namespace std;

int main()
{
	int val, total = 0;
	cin >> val;
	while (val > 0)
	{
		total += val;
		cin >> val;
	}
	return 0;
}