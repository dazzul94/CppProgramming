#include <iostream>
using namespace std;
void SwapValues(int &x, int &y);//�Լ��� ����

int main()
{
	int a, b;
	cout << "a�� ��: ";
	cin >> a;
	cout << "b�� ��: ";
	cin >> b;
	if(a < b) SwapValues(a, b);
	cout << "ū������ �������!====>" << a << b << endl;
	return 0;
}

void SwapValues(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}