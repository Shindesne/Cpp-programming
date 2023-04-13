#include <iostream>

using namespace std;
class expo
{
    public:
    int pow(int a,int b);
};
int expo::pow(int a,int b)
{
    int r=1;
    while(b!=0)
    {
        r=r*a;
        b--;
    }
    return r;
}
int main()
{
    int c,e,p;
    expo ob;
    cout<<"enter the c";
    cin>>c;
    cout<<"enter the e";
    cin>>e;
    p=ob.pow(c,e);
    cout<<p;
}

