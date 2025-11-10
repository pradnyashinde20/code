#include<iostream>
using namespace std;

namespace shivam{
    
    int a =5;
    void show(){
        cout<<" this is show method"<<endl;
    }
}
using namespace shivam;
int main(){
    show();
    cout<<a;
}