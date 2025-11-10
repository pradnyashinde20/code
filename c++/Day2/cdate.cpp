#include<iostream>
using namespace std;

class Cdate{
    int dd, mm, yy;
    public:
     void display();
     void accept();
     void setDd(int);
     int getMm();
};
void Cdate :: accept(){
    cout<<"enter the date, month and year\n";
    cin>>dd>>mm>>yy;
}
void Cdate :: display(){
    cout<<"Date is"<<dd<<"/"<<mm<<"/"<<yy;
}
void Cdate::setDd(int r)
{
dd=r;
}
int Cdate::getMm()
{
    return dd;
}
int main(){
    Cdate c;
    c.accept();
    c.display();
    c.setDd(19);
    cout<<"date  is:"<<c.getMm();
}
