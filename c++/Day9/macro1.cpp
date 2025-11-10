#include<iostream>
using namespace std;
 #define maximum(a,b)(a>b)?a:b;

 int main(){
    cout<<"maximum value from 100 and 1000"<<endl;
    int k =maximum(100,1000);
    cout<<k<<endl;

    cout<<"maximum value from two elements"<<endl;
    int z = maximum(5,15);
    cout<<z<<endl;
 }