#include<iostream>
using namespace std;
class cdate{
    int dd,mm,yy;
    public:
    cdate()
    {
        dd=mm=yy=0;
    }
    cdate(int dd,int mm,int yy)
    {
        this->dd=dd;
        this->mm=mm;
        this->yy=yy;
        cout<<"value of dd/mm/yy:"<<dd<<"/"<<mm<<"/"<<yy;

    }
    void show(){
         cout<<"value of dd/mm/yy:"<<dd<<mm<<yy;
    }
};
int main()
{
    cdate *ptr=new cdate(10,03,2025);
    ptr->show();
    cdate();
    delete ptr;
}