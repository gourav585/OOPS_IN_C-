#include<iostream>
using namespace std;
class a{
	public:
		void Afunc(){
			cout<<"func of a";
		}
};
class b{
	public:
		void Bfunc(){
			cout<<"func of b";
		}
};
class c: public a , public b{
	public:
};
int main(){
	c C;
	C.Afunc();
	C.Bfunc();
}
