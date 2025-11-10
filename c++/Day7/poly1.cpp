#include<iostream>
using namespace std;

class base{
    int num =20;
    public:
    base();
    base(int);
    virtual void display();
};
 base ::base(){

}
base :: base(int p){
    num=p;
}
void base :: display(){
    cout<<num<<endl;
}
class child1 : public base{
  
     public:
    char name[20]="shivam";
     child1();
     child1(char);
     void display();
};
child1 :: child1(){

}

child1 :: child1(char a){
   name[20]=a;
}
void child1 :: display(){
    cout<<name<<endl;
}

class child2 : public base{
    public:
    void display();
};
void child2 :: display(){
    cout<<"the value is "<<endl;
}

int main(){
    base* ptr;
    child1 ch1;
    ptr = &ch1;
    ptr->display();
}
