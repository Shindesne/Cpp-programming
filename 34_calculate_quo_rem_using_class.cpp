#include <iostream>

using namespace std;

class cal
{
    public:
    float n1,n2;
    int n3,n4;
    void setdata();
    float data1();
    int data2();
};
void cal::setdata()
{
    cout<<"enter the value";
    cin>>n1>>n2>>n3>>n4;
}
float cal::data1()
{
    int quo;
    quo=n1/n2;
    return(quo);
}
int cal::data2()
{
    int rem;
    rem=n3/n4;
    return(rem);
}
int main()
{
    cal ob;
    ob.setdata();
    cout<<ob.data1();
    cout<<ob.data2();
}

