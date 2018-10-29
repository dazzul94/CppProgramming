#include <iostream>
using namespace std;
inline void SwapValues(int &x, int &y)	//자주 호출한다
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	cout << "a의 값: ";
	cin >> a;
	cout << "b의 값: ";
	cin >> b;
	if (a < b) SwapValues(a, b);
	cout << "큰수부터 순서대로!====>" << a << b << endl;
	return 0;
}
