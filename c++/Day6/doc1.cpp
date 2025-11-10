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
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
     }
};
int main(){
    cdate* ptr = new cdate();
    ptr->display();
    cdate * ptr1 = new cdate(20,5,2025);
    ptr1->display();
}