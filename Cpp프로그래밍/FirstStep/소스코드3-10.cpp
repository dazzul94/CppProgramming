#include <iostream>
using namespace std;
inline void SwapValues(int &x, int &y)	//���� ȣ���Ѵ�
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	cout << "a�� ��: ";
	cin >> a;
	cout << "b�� ��: ";
	cin >> b;
	if (a < b) SwapValues(a, b);
	cout << "ū������ �������!====>" << a << b << endl;
	return 0;
}
