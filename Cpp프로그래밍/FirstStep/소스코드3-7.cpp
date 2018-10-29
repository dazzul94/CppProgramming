#include <iostream>
using namespace std;

void PrString(const char *str, int tabLen = 8);
int main()
{
	char *str = "a\tbcd\tabcdefghi\tabc";
	PrString(str);
	PrString(str, 4);
	return 0;
}



void PrString(const char *str, int tabLen)
{
	int col = 0;	//¿­¹øÈ£
	while (*str)
	{
		if (*str == '\t')
		{
			int n = (col / tabLen + 1) * tabLen;
			for (; col < n; col++)
			{
				cout << ' ';
			}
		}
		else
		{
			cout << *str;
			col++;
		}
		str++;
	}
	cout << endl;
}