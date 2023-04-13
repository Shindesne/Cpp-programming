#include <iostream>

using namespace std;
class squ
{
    public:
    void square(int a);
};
void squ::square(int a)
{
    int i;
    for(i=1;i<=a;i++)
    cout<<"square="<<i*i<<endl;
}
int main()
{
    int a;
    squ ob;
    cout<<"enter the no";
    cin>>a;
    ob.square(a);
}

