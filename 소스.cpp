#include<iostream>
#include<cstring>
using namespace std;

class SoSimple
{
	int num;
public:
	SoSimple(int n) :num(n)
	{
		cout << "num=" << num << ", address=" << this << endl;	//this�� ��ü�� �ּҰ��� ������.
	}
	void ShowSimpleData()
	{
		cout << num << endl;
	}
	SoSimple* GetThisPointer()	//�� �Լ��� �θ� ����, SoSimple�� �ش��ϴ� ������->�Լ�();
	{
		return this;
	}
};

int main()
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();	//sim1�� ��ü�ּҰ��� ptr1�� ����
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();
	return 0;
}