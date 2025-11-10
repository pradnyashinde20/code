#include<iostream>
using namespace std;
int a=10;///global variable
void add(){
    int a=20;
    int b=30;
    int c=a+b;
    cout<<c;

}

int main()
{
cout<<a;
add();

}