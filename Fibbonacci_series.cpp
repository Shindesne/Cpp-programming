#include <iostream>

using namespace std;

int main()
{
    int a=0,b=1,c=0,i=1,n;
    cout<<"enter the no";
    cin>>n;
    
    do
    {
        cout<<c<<"\t";
        a=b;
        b=c;
        c=a+b;
        i++;
    }
    while(i<=n);
}
