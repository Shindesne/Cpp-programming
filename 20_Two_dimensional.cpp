#include <iostream>

using namespace std;

int main()
{
    int a[10][10],b[10][10],c[10][10],i,j;
cout<<"enter numbers";
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
    cin>>a[i][j];
}
}
cout<<"enter the no";
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
   cin>>b[i][j];
}
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
    c[i][j]=a[i][j]+b[i][j];
    cout<<c[i][j]<<endl;
}
}
}

