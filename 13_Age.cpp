#include <iostream>

using namespace std;

int main()
{
    int no;
    cout<< ("enter the value");
    cin>>no;
    if (no<18)
{
   cout<<"child";
}
 else if (no>18 && no<=35)
 {
    cout<<"young";
}
 else
 {
     cout<<"adult";
 }
}
 
