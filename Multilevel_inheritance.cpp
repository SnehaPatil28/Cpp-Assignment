#include<iostream>
using namespace std;
class A{
	public:
		int a;
		
		void get1(){
			cout<<"\nEnter numbers: ";
			cin>>a;
		}
};

class B: public A{
	public:
		int b;
		
		void get2(){
			cout<<"\nEnter numbers: ";
			cin>>b;
		}
};

class C: public B{
	public:
		void sum()
		{
			cout<<"\nSum: "<<a+b;
		}
};


int main(){

	C obj;
	obj.get1();
	obj.get2();
	obj.sum();

return 0;
}

