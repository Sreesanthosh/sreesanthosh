#include<iostream>
using namespace std;
class student
{
	int no;
	string name;
	public:
	student();
	student(int,string);
	void display();
};
student::student()
{
	no=0;
	name ="unknown";
}
student::student(int x,string y)
{
	no=x;
	name=y;
}
void student::display()
{
	cout<<"reg no:"<<no<<endl;
	cout<<"name:"<<name<<endl;
}
int main()
{
	student s;
	student s1(123,"sree");
	s1.display();
	return 0;
}
