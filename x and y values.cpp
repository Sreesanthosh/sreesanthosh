#include<iostream>
using namespace std;
	class add
	{
		int x,y;
		public :
		void input();
		void display();
	};
	void add:: input()
	{
		cout<<"Enter x and y values";
		cin>>x>>y;
		}
		void add::display()
		{
			cout<<"Sum of 2numbers"<<x+y;
		}
		int main()
		{
			add a;
			a.input();
			a.display();
			return 0;
		}

