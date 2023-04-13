#include <iostream>

using namespace std;
class rect
{
    public:
    int l,b,a;
    void setdata();
    void area();
};
void rect::setdata()
{
    cout<<"enter the no";
    cin>>l>>b;
}
void rect::area()
{
    a=l*b;
    cout<<a;
}
int main()
{
    rect snehal;
    snehal.setdata();
    snehal.area();
}
    
