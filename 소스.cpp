#include<iostream>
#include<cstring>
using namespace std;

class SoSimple
{
	int num;
public:
	SoSimple(int n) :num(n)
	{
		cout << "num=" << num << ", address=" << this << endl;	//this는 객체의 주소값을 가진다.
	}
	void ShowSimpleData()
	{
		cout << num << endl;
	}
	SoSimple* GetThisPointer()	//이 함수를 부를 때엔, SoSimple에 해당하는 포인터->함수();
	{
		return this;
	}
};

int main()
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();	//sim1의 객체주소값을 ptr1에 저장
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();
	return 0;
}