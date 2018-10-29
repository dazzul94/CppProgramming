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
	srec = { "C2rTV001", 2018, 10, 28, "侩牢矫 贸牢备" };
	PrSalesRec(srec);
}

void PrSalesRec(const SalesRec &srec)
{
	cout << "前格内靛: " << srec.pID << endl;
	cout << "朝楼 : " << srec.dYear << srec.dMonth << srec.dDate << endl;
	cout << "林家: " << srec.deliverAddr << endl;
}