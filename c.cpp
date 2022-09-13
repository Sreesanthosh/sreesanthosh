#include<iostream>
using namespace std;
class student{

	
	public:
	int regno,mark1,mark2,mark3,total,avg;
	char name[10];
		void getdata();
		void calculate();
		void display();
};
void student::getdata(){

	cout<<"enter the name of student:";
	cin>>name;
	cout<<"enter the register number:";
	cin>>regno;
	cout<<"enter the mark1 :";
	cin>>mark1;
	cout<<"enter the mark2 :";
	cin>>mark2;
	cout<<"enter the mark3 :";
	cin>>mark3;
}
void student::calculate(){
	total=mark1+mark2+mark3;
	avg=total/3;
}
void student::display(){
	cout<<"name            - "<<name<<endl;
	cout<<"register number - "<<regno<<endl;
	cout<<"mark1           - "<<mark1<<endl;
	cout<<"mark2           - "<<mark2<<endl;
	cout<<"mark3           - "<<mark3<<endl;
	cout<<"total           - "<<total<<endl;
	cout<<"average         - "<<avg<<endl;
}
int main(){
	student a;
	a.getdata();
	a.calculate();
	a.display();
	return 0;
	
}




