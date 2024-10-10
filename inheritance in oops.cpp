#include<iostream>
using namespace std;
class a{
	public:
		void func(){
			cout<<"inherited";
		}
};
class b: public a{
	
};
int main(){
	b B;
	B.func();
}

