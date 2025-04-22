#include<iostream>
 using namespace std;
 
 class Large
 {
    public:
 		int a,b,c;
 		
 		void get_Num()
 		{
 			cout<<"Enter First Number: ";
 			cin>>a;
 			cout<<"Enter Second Number: ";
 			cin>>b;
 			cout<<"Enter Third Number: ";
 			cin>>c;
		 }
		
		
		
		int Show()
		{
		    int large=a;
		    
		    if(large<b)
		    {
		    	large=b;
			}
		    if(large<c)
		    {
		    	large=c;
			}
		    return large;
		}
		
 };
 
 int main()
 {
    Large l;
    l.get_Num();
    cout<<"Larger Number: "<<l.Show();
 }
