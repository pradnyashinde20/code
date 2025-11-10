// A constant member function can be overloaded with a function of same name.
#include<iostream>
using namespace std;
class A{
    public:
     void show();
     void show()const;
};
void A :: show(){
    cout<<"not constant function called"<<endl;
}
void A :: show() const{
     cout<<"constant function call"<<endl;
}
int main(){
    A obj1;
    obj1.show();
    const A obj2;
    obj2.show();
}
