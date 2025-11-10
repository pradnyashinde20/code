#include<iostream>
using namespace std;

class demo{
    int a;
    public:
    void init(int x){
        a=x;
    }
    void display(){
    cout<<"value of a is : "<<a<<endl;
    }
};
int main(){
     demo obj;
     obj.init(20);
     obj.display();

     demo obj1(obj);
     obj1.display();

}