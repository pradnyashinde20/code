#include<iostream>
using namespace std;
class a{
    int *ptr;
    public:
    a()
    {
        ptr=new int;
        *ptr=10;
        cout<<*(ptr);
    }
    void show()
    {
        cout<<"this is show method";
    }
};
int main(){
a obj;
//a();
obj.show();
}