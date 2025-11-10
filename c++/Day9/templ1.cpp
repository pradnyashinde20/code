#include<iostream>
using namespace std;
template<class t>
t add(t &a, t&b){
    t res = a+b;
    return res;
}
int main(){
    int i=2;
    int j=3;
    cout<<"addition of i and j is "<<add(i,j)<<endl;
    float x=10.6;
    float y = 4.2;
    cout<<"addition of x and y is "<<add(x,y)<<endl;
}