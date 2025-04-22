#include<iostream>
using namespace std;

class Shapes{
	public:
		void area(float r){
			cout<<"\nArea of Circle :"<<3.142*r*r;
		}
		void area(float l,float b){
			cout<<"\nArea of Rectangle :"<<l*b;
		}
		void area(int base,int h){
			cout<<"\nArea of Triangle :"<<0.5*base*h;
		}
};
int main(){
	Shapes s;
	s.area(5); 
	s.area(2.4f,5.0f);
	s.area(6,4);

return 0; 
}

