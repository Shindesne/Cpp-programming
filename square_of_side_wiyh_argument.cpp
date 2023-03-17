#include <iostream>
using namespace std;
void sq(int s)
{
    int a;
    a=s*s;
    cout<<"area="<<a;
}
int main()
{
    int side;
    cout<<"enter the side";
    cin>>side;
    sq(side);
}
