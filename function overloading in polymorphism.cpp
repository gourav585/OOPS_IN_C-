#include<iostream>
using namespace std;
class gourav{
	public:
	void func(){
		cout<<"i am a function with no arguments "<<endl;
	}
	void func(int){
		cout<<"i am a function with int arguments "<<endl;
	}
	void func(double){
		cout<<"i am a function with double arguments "<<endl;
	}
};
int main(){
	gourav a;
	a.func();
	a.func(4);
	a.func(6.2);
	
}
