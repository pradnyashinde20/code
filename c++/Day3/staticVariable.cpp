#include<iostream>
using namespace std;
void show();
static int a = 20;
int main(){
    cout<<a<<endl;
    a++;
    show();
    cout<<a<<endl;
    
    
}
void show(){
    cout<<a<<endl;
    static int b = 4;
    cout<<b<<endl;
    cout<<a<<endl;
    b++;
    cout<<b<<endl;
    a++;
}