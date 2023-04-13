#include <iostream>

using namespace std;
class ex
{
    public:
    int no1,no2,gcd;
    void setdata();
    int data();
};
void ex::setdata()
{
    cout<<"enter the value";
    cin>>no1>>no2;
}
int ex::data()
{
    int i;
    for(i=1;i<=no1&&i<+no2;i++)
    {
        if(no1%i==0&&no2%i==0)
    {
        gcd=i;
    }
    }
return(gcd);
}
int main()
{
    ex ob;
    ob.setdata();
    cout<<ob.data();
}

