// Passing and Returning Objects in C++

#include<iostream>
using namespace std;
class A{
    int x;
    public:
    void get();
    A add(A & b1){
        A obj3;
        obj3.x = this->x + b1.x;
        return obj3;
    }
    void show(){
        cout<<"value of x "<<x;
    }
};
void A :: get(){
    cin>>x;
}
int main(){
    A obj,obj1;
    obj.get();
    obj1.get();
    A obj4=obj.add(obj1);
    obj4.show();
}