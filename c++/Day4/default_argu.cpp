#include<iostream>
using namespace std;
void add(int=2,int=3,int=4,int=5);
int main(){
    add();
    add(5);
    add(10,9);
    add(32,34,56,67);

}

void add(int a,int b, int c, int d){
    cout<<a+b+c+d<<endl;
}