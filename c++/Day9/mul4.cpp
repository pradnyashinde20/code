#include<iostream>
using namespace std;

class A {
 public:
 void show(){
    cout<<"class A show method"<<endl;
 }
};
class B{
public:
void show(){
    cout<<"class B show function"<<endl;
}
};

class c : public A,public B{

};
int main(){
  c obj;
  obj.A::show();
  obj.B::show();
}