#include <iostream>

using namespace std;
class tri
{
    public:
    float b,h,a;
    void setdata()
    {
        cout<<"enter the no";
        cin>>b>>h;
    }
    void area()
    {
        a=0.5*b*h;
        cout<<a;
    }
};
int main()
{
    tri snehal;
    snehal.setdata();
    snehal.area();
}
