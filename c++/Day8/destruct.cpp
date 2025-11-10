#include<iostream>
using namespace std;
class a{
    int p;
    public:
    void display()
    {
        cout<<"enter the value of p:"<<endl;
        cin>>p;
        cout<<"value of p is:"<<p;
    }
};
int main()
{
a *ptr=new a();
    ptr->display();
    delete ptr;
    ptr->display();
    
}
