#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 2, 3, 9 ,4, 7 };
	int sum = 0;
	for (int i : arr)
	{
		sum += i;
	}
	cout << sum << endl;
	return 0;
}