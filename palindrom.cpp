#include<iostream>
#include<string>
using namespace std;

int main(){
	string str,str2;
	cout<<"Enter string: ";
	getline(cin, str);
	
	strcpy(str2,str);
	strrev(str2);
	cout<<strcmp(str,str2);
}
