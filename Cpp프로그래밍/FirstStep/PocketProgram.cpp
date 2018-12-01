#include <iostream>
#include "dynamicPocket.h"
using namespace std;

int main()
{
	DynamicPocket dynamicPocket(2);
	dynamicPocket.addValue(1);
	dynamicPocket.addValue(2);
	dynamicPocket.print();
	cout << "가장 오래전에 저장한 정수====" << dynamicPocket.getFirstInputValue() << endl;
	cout << "마지막으로 저장한 정수====" << dynamicPocket.getLastInputValue() << endl;
	cout << "가장 큰수====" << dynamicPocket.getMaxValue() << endl;
	cout << "가장 작은수 ====" << dynamicPocket.getMinValue() << endl;
	cout << "평균====" << dynamicPocket.getAverage() << endl;
	cout << "분산====" << dynamicPocket.getVariance() << endl;
	if (dynamicPocket.changeSize(10)) {
		cout << "배열의 크기 바꿈"<< endl;
	}
}
