#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
	int age;
	
	cout<<"Enter age:";
	cin>>age;
	
	try{
		if(age == 0){
			throw age;
		}
	    if(age < 0)
			throw "Enetred age is invalid";
		
		cout<<"Age is "<<age;
	}
	catch(const int a){
		cout<<"Entered age is "<<a;
	}
	catch(const char *ptr){
		cout<<"ERROR : "<<ptr<<"\n"<<"Entered Age is "<<age;
	}
	return 0;
}

