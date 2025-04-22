#include<iostream>
 using namespace std;
 
 class operation
 {
    public:
 		int a,b;
 		
 		void get_Num()
 		{
 			cout<<"Enter First Number: ";
 			cin>>a;
 			cout<<"Enter Second Number: ";
 			cin>>b;
		 }
		int sum()
		{
			return a+b;
		}
		int sub()
		{
			return a-b;
		}
		int multi()
		{
			return a*b;
		}
		float div()
		{
			return (float)a/b;
		}
		
		void Show()
		{
			cout<<"Addition: "<<sum();
			cout<<"\nSubtraction: "<<sub();
			cout<<"\nMultiplition: "<<multi();
			cout<<"\nDivition: "<<div();
		}
		
 };
 
 int main()
 {
 	operation n;
 	n.get_Num();
 	n.Show();
 }
