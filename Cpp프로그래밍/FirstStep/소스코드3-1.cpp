#include <iostream>
using namespace std;
/*���1: main �Լ� ���� �����Ѵ� 
float FahrToC(float fahr)	//�Լ��� �Ӹ��κ�
{	//�Լ��� ��ü���
	float c = (fahr - 32) + 5 / 9;	
	//ȭ���µ��� 32���� �����µ��� 0���̰�
	//ȭ���µ��� 1�ö󰥶� �����µ��� 5 / 9��ŭ �ö󰣴�
	return c;
}
*/
int main()
{
	float FahrToC(float fahr);	// ���2 : �Լ��� ������ �����Ѵ�.
	float fTemp, cTemp;

	cout << "ȭ���µ�" << endl;
	cin >> fTemp;
	cTemp = FahrToC(fTemp);  //�Լ� ȣ��
	cout << "-------> ���� �µ�: " << cTemp << endl;
	return 0;
}
float FahrToC(float fahr)	//�Լ��� �Ӹ��κ�
{	//�Լ��� ��ü���
	float c = (fahr - 32) + 5 / 9;
	//ȭ���µ��� 32���� �����µ��� 0���̰�
	//ȭ���µ��� 1�ö󰥶� �����µ��� 5 / 9��ŭ �ö󰣴�
	return c;
}