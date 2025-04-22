#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
	int arr[5] = {2,4,6,8,10},c;
	cout<<"Enter Index (0-4): ";
	cin>>c;
	
	try{
		if(c<0 || c>4)
		{
			throw c;
		}
		
		cout<<"Element is "<<arr[c];
	}
	catch(const int b)
	{
		c = (b%5 + 5) % 5;
		cout<<"ERROR : Invalid Index"<<endl;
		cout<<"Element is "<<arr[c];
	}

return 0;
}

