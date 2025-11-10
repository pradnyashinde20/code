#include<iostream>
using namespace std;
class base{
     public:
     base(){
        cout<<"base constructor called"<<endl;
     }
};
class child1 : public base{
     public:
     child1(){
        cout<<"child1 constructor called"<<endl;
     }
};
class child2 : public base{
    public:
    child2(){
        cout<<"child2 constructor is called"<<endl;
    }
        
    
};

class sub:public child2,public child1{
    public:
    sub(){
        cout<<"subclass constructor is called"<<endl;
    }
};
int main(){
    sub s1;
    
}