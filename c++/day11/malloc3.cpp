#include<iostream>
using namespace std;

class A {
    int num;
    public:
    A(){
        cout<<"constructor is called"<<endl;
    }
    ~A(){
        cout<<"destructor is called"<<endl;
    }
};

int main(){
    A* ptr= new A();
    cout<<"class object is created using new operator"<<endl;
    delete ptr;

    A* ptr1 = (A*)malloc( sizeof(A));
    cout<<"class object is created using malloc function"<<endl;
    free(ptr1);

}