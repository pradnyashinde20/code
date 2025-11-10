#include<iostream>
using namespace std;

class A{
    int a;
    public:
    int geta(int );
    friend void abc(A&);

    
};
int A :: geta(int a){
    //cin>>a;
   this->a =a;
}
void abc(A& obj2){
    cout<<obj2.a<<endl;

}
int main(){
    A obj;
    obj.geta(10);
    abc(obj);
}