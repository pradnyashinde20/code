#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    cout<<"before swapping:"<<a<<b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping"<<a<<b;
}