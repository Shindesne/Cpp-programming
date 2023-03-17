#include <iostream>

using namespace std;

int main()
{
    int a[2][2][2],i,j,k;
cout<<"enter numbers";
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        for(k=0;k<2;k++)
        {
            cin>>a[i][j][k];
        }
    }
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        for(k=0;k<2;k++)
        {
            cout<<a[i][j][k]<<endl;
        }
}
        }
}
