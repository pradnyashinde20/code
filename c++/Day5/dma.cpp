#include<iostream>
using namespace std;
int main(){
    int* num = new int;
    float * value = new float;
    *num = 10;
    *value = 23.23;
    cout<<*num<<endl;
    cout<<*value<<endl;
    int* n = new int(50);
    cout<<*n;
}