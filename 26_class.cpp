#include <iostream>

using namespace std;
class car 
{
    public:
    string name;
    float price;
    void getdata()
    {
        cout<<"enter car name";
        cin>>name;
        cout<<"enter the price";
        cin>>price;
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"price:"<<price;
    }
};
int main()
{
    car obj;
    obj.getdata();
    obj.display();
}

