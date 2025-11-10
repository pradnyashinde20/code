// memory management using new

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter no of elements"<<endl;
    cin>>n;
    int * ptr = new int[n];
    cout<<"accepts elements"<<endl;
    for(i=0;i<n;i++){
        cin>>*(ptr+i);
    }
    cout<<"display elements"<<endl;
    for(i=0;i<n;i++){
        cout<<*(ptr+i)<<"  ";
    }
    delete [] ptr;
}