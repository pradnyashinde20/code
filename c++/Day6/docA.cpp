#include<iostream>
using namespace std;

class A{
    int num;
    public:
     void accept(){
        cin>>num;
     }
     void display(){
        cout<<num<<endl;
     }
};
int main(){
   int n,i;
  	cout<<"enter no of objects\n";
  	cin>>n;
    A* ptr = new A[n];
    cout<<"accept values"<<endl;
    for(int i=0;i<n;i++){
        ptr[i].accept();
    }
    cout<<"display values"<<endl;
   for(int i=0;i<n;i++){
        ptr[i].display();
    }

}