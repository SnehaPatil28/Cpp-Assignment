#include<iostream>

class Area{
public:
   float area;
   float pi = 3.14;

   void Circle_Area(int r)
   {
     area = pi*r*r;
     cout<<"Area = "<<area;
   } 
}

int main(){
int r;
  
printf("Enter the value of radius:-");
scanf("%d",&r);
  
Area C1(r);

return 0;
}

