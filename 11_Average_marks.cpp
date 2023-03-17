#include <iostream>

using namespace std;

int main()
{
   float a,b,c,per,tot;
   cout<<"enter the no";
   cin>>a>>b>>c;
   tot=a+b+c;
   per=(tot/300)*100;
   cout<<per;
   if(per>70)
   {
       cout<<("Dist");
   }
   else if(per>51 && per<70)
   { 
       cout<<"first class";
   }
   else if(per>36 && per>50)
   {
       cout<<"second class";
   }
   else if(per<35)
   {
       cout<<"fail";
   }
}
   
