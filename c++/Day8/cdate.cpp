#include<iostream>
using namespace std;
class cdate{
    int dd,mm,yy;
    public:
    cdate(){
         dd,mm,yy=0;
    }
    cdate(int p,int q,int r){
        dd=p;
        mm=q;
        yy=r;
    }
    void display(){
        cout<<"date is  :"<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }
    ~cdate(){
        cout<<"destructor is called"<<endl;
    }
};
int main(){
cdate * ptr = new cdate(10,05,2025);
ptr->display();
delete ptr;
}