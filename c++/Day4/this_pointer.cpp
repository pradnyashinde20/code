#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    void getvalues(int a, int b){
        this->a=a;
        this->b=b;
    }
    int getvalues(){
        cout<<a<<"\t"<<b;
    }
};
int main(){
    A obj;
    obj.getvalues(10,20);
    obj.getvalues();

}