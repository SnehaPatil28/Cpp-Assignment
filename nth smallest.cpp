#include<iostream>
using namespace std;
		
int main()
{
		int r,c;
		cout<<"Print row size of array: ";
		cin>>r;
		cout<<"Print column size of array: ";
		cin>>c;
		int arr[r][c];
		
		cout<<"Enter elements in array: ";
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			   cin>>arr[i][j];
		}
		int target;
		cout<<"Enter target: ";
		cin>>target;
		
		cout<<"Targeted value: "<<arr[target/r][(target%c)-1];
}
		  
		   
		
