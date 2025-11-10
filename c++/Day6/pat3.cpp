#include<iostream>
using namespace std;

int main(){
 
    for(int i=6;i>=1;i--){
        for(int j=1;j<=6-i;j++){
            cout<<" ";    
    }
        for(int k=1;k<=(2*i)-1;k++){
            cout<<k;
        }
        cout<<endl;
}
}