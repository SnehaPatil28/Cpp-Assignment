#include<iostream>
 using namespace std;

class student{
 public:
	char Name[20];
	int Roll_Num;
	float Percentage;
	
	void get()
	{
		cout<<"Roll number: ";
		cin>>Roll_Num;
		cout<<"Name: ";
		cin>>Name;
		cout<<"Percentage: ";
		cin>>Percentage;
	}
	
	void show()
	{
		cout<<"\nStudent info:\n";
	    cout<<"\tRoll Number: "<<Roll_Num<<"\n";
	    cout<<"\tName: "<<Roll_Num<<"\n";
	    cout<<"\tPercentage: "<<Percentage;
	}
};

int main()
{
	student s;
	s.get();
	s.show();
	return 0;
}
