#include<iostream>
using namespace std;
class X
{
	int a=5,b=6;
	public:
		void getdata1()
		{
			cout<<"addition value is"<<a+b<<endl;
		}
};
class Y:public X
{
	int a=7,b=8;
	public:
		void getdata()
		{
			cout<<"multiplication value is"<<a*b<<endl;
		}
};
int main()
{
	Y y;
	y.getdata1();
	y.getdata();
}
