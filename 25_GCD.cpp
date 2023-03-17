#include <iostream>
using namespace std;
int gcd()
{
    int n1,n2,i,x;
    cout<<"enter the value";
    cin>>n1>>n2;
    for(i=1;i<=n1&&i<=n2;i++)
    {
      if(n1%i==0&&n2%i==0)
      x=i;
    }
      return(x);
}
int main()
{
    int a;
    a=gcd();
    cout<<"gcd"<<a;
}
