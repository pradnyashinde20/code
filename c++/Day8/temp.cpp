#include<iostream>
using namespace std;
class temp{
    int * ptr;
    int size;
    public:
    temp();
    void get();
    void show();
    int max();
    int min();
};
temp::temp(){
    cout<<"how many elements you want to store"<<endl;
    cin>>size;
    ptr = new int[size];
}
void temp :: get(){
    cout<<"accepts element"<<endl;
    for(int i=0;i<size;i++){
        cin>>ptr[i];
    }
}
void temp :: show(){
    cout<<"display element"<<endl;
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<"\t";
    }
}
int temp :: max(){
    cout<<"maximum element"<<endl;
    int m = ptr[0];
    for(int i=0;i<size;i++){
        if(ptr[i]>m){
            m=ptr[i];
            cout<<m<<endl;
        }
    }
}
int temp :: min(){
    cout<<"minimum element"<<endl;
    int m = ptr[0];
    for(int i=0;i<size;i++){
        if(ptr[i]<m){
            m=ptr[i];
            cout<<m;
        }
    }
}
int main(){
    temp t;
    t.get();
    t.show();
    t.max();
    t.min();
}