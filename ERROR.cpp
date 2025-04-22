#include<iostream>
#include<stdexcept>
#include<string>
using namespace std;

int main(){
	float a,b,c;
	cout<<"Enter the two numbers for division: ";
	cin>>a>>b;
	
	try{
		if(b == 0)
			throw "Divide by zero error";
		c = a/b;
		cout<<"Division is "<<c;
	}
	catch(const char *ptr)
	{
		cout<<"ERROR : "<<ptr;
	}

return 0;
}

