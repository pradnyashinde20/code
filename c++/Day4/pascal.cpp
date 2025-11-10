#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int coef;
    int row;
    cout<<"enter the rows"<<endl;
    cin>>row;

    for(int i=1;i<=row;i++){
        coef=1;
        for(int j=row-i;j>0;j--){
            cout<<setw(3)<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<setw(6)<<coef<<" ";
            coef=coef*(i-k)/k;  
        }
        cout<<endl;
    }
}