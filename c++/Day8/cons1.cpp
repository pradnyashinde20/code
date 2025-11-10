// C++ program to demonstrate the number of times constructor and destructors are called
#include<iostream>
using namespace std;
static int count=0;
class A{
    public:
    A(){
         count++;
        cout<<"consructor of A"<<count<<endl;
      
    }
    ~A(){
        cout<<"destructor of A"<<count<<endl;
        count--;
    }
};
int main(){
    A obj1,obj2,obj3,obj4;
}
