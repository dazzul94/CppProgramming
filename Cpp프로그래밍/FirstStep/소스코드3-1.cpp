#include <iostream>
using namespace std;
/*방법1: main 함수 전에 선언한다 
float FahrToC(float fahr)	//함수의 머리부분
{	//함수의 몸체블록
	float c = (fahr - 32) + 5 / 9;	
	//화씨온도의 32도가 섭씨온도의 0도이고
	//화씨온도가 1올라갈때 섭씨온도는 5 / 9만큼 올라간다
	return c;
}
*/
int main()
{
	float FahrToC(float fahr);	// 방법2 : 함수의 원형을 선언한다.
	float fTemp, cTemp;

	cout << "화씨온도" << endl;
	cin >> fTemp;
	cTemp = FahrToC(fTemp);  //함수 호출
	cout << "-------> 섭씨 온도: " << cTemp << endl;
	return 0;
}
float FahrToC(float fahr)	//함수의 머리부분
{	//함수의 몸체블록
	float c = (fahr - 32) + 5 / 9;
	//화씨온도의 32도가 섭씨온도의 0도이고
	//화씨온도가 1올라갈때 섭씨온도는 5 / 9만큼 올라간다
	return c;
}