//#pragma once �ҽ������� �ѹ��� �����ϵǵ���
#ifndef COUNTER_H_INCLUDED 

#define COUNTER_H_INCLUDED 
class Counter
{
	int value;	//default �� private

public:
	Counter() {
		value = 0;
	}
	Counter() : value(0) {};
	//���� 0���� ���� �� �ִ�
	void reset() {
		value = 0;
	}
	//���� 1�� ������ų �� �ִ�
	void count() {
		//value += 1;
		++value;
	}
	//������ ����� ���� �˷��� �� �ִ�.
	//��������� ���� ������ �� ����
	int getValue() const {
		return value;
	}
};
#endif COUNTER_H_INCLUDED 