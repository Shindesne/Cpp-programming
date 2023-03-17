#include <iostream>

using namespace std;

int main()
{
    int a[10],b[10],c[10],i;
cout<<"enter numbers";
for(i=0;i<3;i++)
{
    cin>>a[i];
}
cout<<"enter the no";
for(i=0;i<3;i++)
{
   cin>>b[i];
}
for(i=0;i<3;i++)
{
    c[i]=a[i]+b[i];
    cout<<c[i]<<endl;
}
}

