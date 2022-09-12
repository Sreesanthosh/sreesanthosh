#include<iostream>
using namespace std;
int main(){
	int p,t,r,si;
	char a,y,n;
	cout<<"enter the principal amount:";
	cin>>p;
	cout<<"enter the time period";
	cin>>t;
	cout<<"check whether customer is senior citizen or not(y/n)";
	cin>>a;
	if(a==y){
		r=12;
		si=p*t*r/100;
		cout<<"the simple intrest is:"<<si<<endl;}
	else{
		r=10;
		si=p*t*r/100;
		cout<<"the simple intrest is:"<<si<<endl;
	}return 0;

}
