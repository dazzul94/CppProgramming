#pragma once
#include <iostream>
using namespace std;

class DynamicPocket {
	int* myPocket;
	int pocketSize;
	int used;
public : 
	DynamicPocket();
	DynamicPocket(int size);
	~DynamicPocket();

	void removeLastValue();
	void addValue(int data);
	void print();				//�迭�� ��� ������ ���
	int getFirstInputValue();
	int getLastInputValue();
	int getMaxValue();
	int getMinValue();
	float getAverage();
	float getVariance();
	bool changeSize(int size);
};
//������
DynamicPocket::DynamicPocket() : pocketSize(1), used(0) {
	myPocket = new int[pocketSize];
}
DynamicPocket::DynamicPocket(int size) : pocketSize(size), used(0) {
	myPocket = new int[pocketSize];
}
//�Ҹ���
DynamicPocket::~DynamicPocket()
{
	delete[] myPocket;
}
void DynamicPocket::addValue(int data) {//���� ���Ѵ�
	if (this->used < this->pocketSize) {
		this->myPocket[this->used] = data;
	}
	//�޸𸮰� ������
	else {
		int* temp = new int[pocketSize];
		for (int i = 0; i < this->used; i++)
			temp[i] = this->myPocket[i];
		delete[] this->myPocket;
		this->pocketSize *= 2;
		this->myPocket = new int[pocketSize];

		//this->myPocket = temp;
		for (int i = 0; i < this->used; i++) {
			this->myPocket[i] = temp[i];
		}
		delete[] temp;
		this->myPocket[this->used] = data;
	}
	this->used++;
	//�޸𸮰� ������ Ȯ��
}
void DynamicPocket::removeLastValue() {
	if (used == 0) return;
	used--;
	int* temp = new int[used];

	for (int i = 0; i < used; i++)
		temp[i] = myPocket[i];
	delete[] myPocket;
	myPocket = new int[pocketSize];

	for (int i = 0; i < used; i++)
		temp[i] = myPocket[i];
	delete[] temp;
	return;
}
void DynamicPocket::print() {
	for (int i = 0; i < this->used; i++)
		printf("%d ", this->myPocket[i]);
	printf("\n");
}
//���� �������� ������ ����
int DynamicPocket::getFirstInputValue() {
	return(myPocket[0]);
}
//���������� ������ ����
int DynamicPocket::getLastInputValue() {
	return(myPocket[used-1]);
}
//���� ū��
int DynamicPocket::getMaxValue() {
	int max = myPocket[0];

	for (int i = 0; i < pocketSize; i++) {
		if (myPocket[i] > max) {
			max = myPocket[i];
		}
	}
	return max;
}

//���� ������
int DynamicPocket::getMinValue() {
	int min = myPocket[0];

	for (int i = 0; i < pocketSize; i++) {
		if (myPocket[i] < min) {
			min = myPocket[i];
		}
	}
	return min;
}

//��� ������ ���
float DynamicPocket::getAverage() {
	float sum = 0;
	for (int i = 0; i < pocketSize; i++) {
		sum += myPocket[i];
	}
	return sum / used;
}

//�л�
float DynamicPocket::getVariance() {
	float variance;
	float sum = 0;
	for (int i = 0; i < pocketSize; i++) {
		sum += myPocket[i];
	}
	float average = sum / used;
	for (int i = 0; i < pocketSize; i++) {
		sum += pow(myPocket[i] - average, pocketSize);
	}
	variance = sum / pocketSize;
	return variance;
}

//void changeSize();
bool DynamicPocket::changeSize(int size) {
	delete myPocket;
	myPocket = new int[size];
	return true;
}