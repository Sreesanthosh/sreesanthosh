#include<iostream>
using namespace std;
class biggest{
	int x,y;
	public:
		void input();
		void display();
};
void biggest::input(){
	cout<<"enter the first number:";
	cin>>x;
	cout<<"enter the second  number:";
	cin>>y;
}
void biggest::display(){
	if(x>y){
		cout<<"x is the biggest number."<<endl;
	}
	else{
		cout<<"y is the biggest number.";
	}
}
int main(){
	biggest a;
	a.input();
	a.display();
	return 0;
	
}
