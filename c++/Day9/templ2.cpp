#include<iostream>
using namespace std;
template<class t> 
    void fun(t a, t b){
        cout<<"execute 1"<<endl;
        cout<<"value of a"<<a<<endl;
    }

template<class y, class z>
    void fun(y a,z b){
        cout<<"execute 2"<<endl;
        cout<<"value of a and b is "<<a<<"\t"<<b<<endl;
    }
   template<class m>
   void fun(m a){
    cout<<"execute 3"<<endl;
    cout<<"value of a is "<<a<<endl;
   }
    int main(){
        fun(20,20);
        fun(10,20.5);
        fun('s');
    }