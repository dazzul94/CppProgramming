#include <iostream>
using namespace std;

int main()
{
	int value, total = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> value;
		total += value;
	}
	cout << "�� ��Ż : " << total << endl;
	return 0;
}