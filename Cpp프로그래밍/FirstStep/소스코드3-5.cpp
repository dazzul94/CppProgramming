#include <iostream>
using namespace std;

struct SalesRec
{
	char pID[10];
	int dYear, dMonth, dDate;
	char deliverAddr[40];
};

int main()
{
	void PrSalesRec(const SalesRec &srec);
	SalesRec srec;
	srec = { "C2rTV001", 2018, 10, 28, "���ν� ó�α�" };
	PrSalesRec(srec);
}

void PrSalesRec(const SalesRec &srec)
{
	cout << "ǰ���ڵ�: " << srec.pID << endl;
	cout << "��¥ : " << srec.dYear << srec.dMonth << srec.dDate << endl;
	cout << "�ּ�: " << srec.deliverAddr << endl;
}