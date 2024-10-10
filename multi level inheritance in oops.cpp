#include<iostream>
using namespace std;
class a{
	public:
		void Afuuc(){
			cout<<"func of a";
		}
};
class b: public a{
	public:
	void Bfunc(){
		cout<<"func of b";
	}
};
class c: public b{
	public:
};
int main(){
	c C;
	C.Afuuc();
	C.Bfunc();
}

