#include <iostream>
#include "dynamicPocket.h"
using namespace std;

int main()
{
	DynamicPocket dynamicPocket(2);
	dynamicPocket.addValue(1);
	dynamicPocket.addValue(2);
	dynamicPocket.print();
	cout << "���� �������� ������ ����====" << dynamicPocket.getFirstInputValue() << endl;
	cout << "���������� ������ ����====" << dynamicPocket.getLastInputValue() << endl;
	cout << "���� ū��====" << dynamicPocket.getMaxValue() << endl;
	cout << "���� ������ ====" << dynamicPocket.getMinValue() << endl;
	cout << "���====" << dynamicPocket.getAverage() << endl;
	cout << "�л�====" << dynamicPocket.getVariance() << endl;
	if (dynamicPocket.changeSize(10)) {
		cout << "�迭�� ũ�� �ٲ�"<< endl;
	}
}
