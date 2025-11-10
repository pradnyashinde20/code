#include<iostream>
using namespace std;

namespace shivam{
    int a =5;
    namespace kunal{
    
    void show(){
        cout<<" this is show method"<<endl;
    }
}
}
using namespace shivam;
using namespace shivam :: kunal;
int main(){
    show();
    cout<<a;
}