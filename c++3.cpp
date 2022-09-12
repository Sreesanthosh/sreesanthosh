#include<iostream>
using namespace std;
int main(){
	int n,revnum=0,rem;
	cout<<"enter the numbers:"<<endl;
	cin>>n;
	if(int(n)){
	cout<<"proceed"<<endl;
	
	while(n!=0){
		rem =n%10;
		revnum= revnum *10 + rem;
		n/=10;
	}
	cout<<"reversed number="<<revnum;
    }
	else
	{
		cout<<"please enter in integers."<<endl;
	}
	return 0;
}
