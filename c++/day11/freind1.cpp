#include<iostream>
using namespace std;
class A {
    private:
    int num;
    protected:
    int value;
    public:
    A(){
        num =10;
        value =20;
    }
    friend class f;
};
class f {
    public:
    void display(A &t){
        cout<<t.num<<" "<<t.value;
    }
};
int main(){
    A obj ;
    f obj1;
    obj1.display(obj);

}