#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number\n";
    cin>>num;
    if(num==1,2,3){
        cout<<"the number is prime"<<endl;
    }
    for(int i=3;i<=num-1;i++){
        if(num%2==0 || num%i==0){
            cout<<"the number is not prime"<<endl;
            break;
        } else{
            cout<<"the number is prime";
            break;
        }
    }
   
}