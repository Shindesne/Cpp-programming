#include <iostream>

using namespace std;
class great
{
    public:
    int n1,n2,a;
    void setdata();
    int gcd();
};
void great::setdata()
{
    cout<<"enter the no";
    cin>>n1>>n2;
}
int great::gcd()
{
    int i;
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%1==0&&n2%i==0)
        a=1;
    }
    return(a);
}
int main()
{
    great snehal;
    snehal.setdata();
    cout<<snehal.gcd();
}

