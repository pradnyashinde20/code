#include<iostream>
using namespace std;
int main(){
    int a =10;
    int b = 20;
    typedef int* iptr;
    iptr ptr1 = &a;
    iptr ptr2 = &b;
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;
}