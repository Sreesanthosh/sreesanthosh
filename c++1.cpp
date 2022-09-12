#include<iostream>
using namespace std;
int main()
{
	string str1= "saveetha@5887";
	char str2[100];
	cout<<"enter the username:"<<endl;
	cin>>str2;
	if (str1==str2)
	{
		cout<<"valid username"<<str2;
	}
    else
    {
    	cout<<"incorrect username"<<str2;
	}
	return 0;
}
