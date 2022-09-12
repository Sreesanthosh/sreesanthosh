#include<iostream>
using namespace std;
int main(){
	float a;
	cout<<"enter the age"<<endl;
	cin>>a;
	if (float(a)>=18){
		cout<<"eligible for voting";
     if (float(a)){
         cout<<"proceed";
		}
		else{
		cout<<"invalid";
	}
}	else {
		cout<<"not eligible for voting"<<endl;
		cout<<"years left for voting="<<18-a<<endl;
	}
	
}
