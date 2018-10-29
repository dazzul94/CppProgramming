//#pragma once 소스파일이 한번만 컴파일되도록
#ifndef COUNTER_H_INCLUDED 

#define COUNTER_H_INCLUDED 
class Counter
{
	int value;	//default 는 private

public:
	Counter() {
		value = 0;
	}
	Counter() : value(0) {};
	//값을 0으로 지울 수 있다
	void reset() {
		value = 0;
	}
	//값을 1씩 증가시킬 수 있다
	void count() {
		//value += 1;
		++value;
	}
	//현재의 계수기 값을 알려줄 수 있다.
	//멤버변수의 값을 변경할 수 없다
	int getValue() const {
		return value;
	}
};
#endif COUNTER_H_INCLUDED 