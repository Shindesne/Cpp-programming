#include <iostream>

using namespace std;

int main()
{
    int no,t,a=0,sum=0;
    cout<<"enter the no";
    cin>>no;
    t=no;
    while(no>0)
    {
        a=a*10;
        a=a+no%10;
        no=no/10;
    }
    if(t==a)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not  palindrome";
    }
}

