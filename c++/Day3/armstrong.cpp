#include<iostream>
using namespace std;
int main(){
    int num,ans=0;
    cout<<"enter the number\n";
    cin>>num;
    int o=num;

    while(num!=0){
        int rem = num%10;
        ans += rem*rem*rem;
        num /=10;
    }
    cout<<ans;

    if(ans==o){
        cout<<"the given number is armstrong"<<endl;
    }
    else{
        cout<<"the given number is not armstrong"<<endl;
    }

}