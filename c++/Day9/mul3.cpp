#include<iostream>
using namespace std;
class base{
     public:
     base(){
        cout<<"base constructor called"<<endl;
     }
     base(int p){
        cout<<"base para constructor is called"<<endl;
     }
};
class child1 : virtual public base{
     public:
     child1(){
        cout<<"child1 constructor called"<<endl;
     }
     child1(int q,int p){
        cout<<"child1 para constructor is called"<<endl;
     }
};
class child2 :virtual public base{
    public:
    child2(){
        cout<<"child2 constructor is called"<<endl;
    }
    child2(int p){
        cout<<"child2 para constructor is called"<<endl;
    }
        
    
};

class sub:public child1,public child2{
    public:
    sub(){
        cout<<"subclass constructor is called"<<endl;
    }
    sub(int p, int q) : base(p), child1(),child2(p)
    {
        cout<<"sub para constructor called"<<endl;
    }
};
int main(){
    sub s1(10,20);
    
}