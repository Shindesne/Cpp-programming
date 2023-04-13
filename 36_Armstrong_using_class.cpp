#include <iostream>

using namespace std;
class armstrong
{
    public:
    void arm(int s);
};
void armstrong::arm(int s)
{
    int n1,r,num=0;
    n1=s;
    while(n1!=0)
    {
        r=n1%10;
        num=num+(r*r*r);
        n1=n1/10;
    }
    if(num==s)
    {
        cout<<"no is armstrong";
    }
    else
    {
        cout<<"no is not armstrong";
    }
}
int main()
{
    int s;
    armstrong ob;
    cout<<"enter the no";
    cin>>s;
    ob.arm(s);
}
