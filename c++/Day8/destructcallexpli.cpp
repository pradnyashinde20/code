#include<iostream>
using namespace std;
class a{
    public:
    a()
    {
        cout<<"this is constructor"<<endl;
    }
    ~a()
    {
        cout<<"this is destructor"<<endl;
    }
};
int main()
{
a c;
c.~a();
}