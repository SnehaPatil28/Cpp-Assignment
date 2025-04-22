#include<iostream>
using namespace std;
		
int main()
{
		int n;
		cout<<"Print size of array: ";
		cin>>n;
		int arr[n];
		
		cout<<"Enter elements in array: ";
		for(int i=0;i<n;i++)
		   cin>>arr[i];
		   
		int large=arr[0], small=arr[0];
		
		for(int i=0;i<n;i++)
		{
			if(large<arr[i])
			  large=arr[i];
			if(small>arr[i])
			   small=arr[i];
		}
		
		cout<<"Largest= "<<large<<'\t'<<"smallest= "<<small;
}
