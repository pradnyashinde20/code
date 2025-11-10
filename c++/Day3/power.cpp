#include<iostream>
using namespace std;
int main(){
    int base, exponent, power=1;
    cout<<"enter the value of base and exponent\n";
    cin>>base>>exponent;
    while(exponent!=0){
        for(int i=1; i<=exponent;i++){
            power = power * base;
        } cout<<power;
          break;
    }
  
}