#include<iostream>
using namespace std;
int main(){
	int a[5],i,j,sum,diff,t;
	cout<<"enter the numbers:"<<endl;
	for(i=0;i<5;i++){
		cin>>a[i];}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				}
				}
				}
	for(i=1;i<=5;i++){
		sum=a[0]+a[4];
		diff=a[0]-a[4];}
	cout<<"max number="<<a[0]<<endl;
	
	
	
	
	
	cout<<"minimum number="<<a[4]<<endl;
	cout<<"sum="<<sum<<endl;
	cout<<"difference="<<diff<<endl;
	return 0;
}
