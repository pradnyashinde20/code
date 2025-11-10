#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
    complex();
    complex(int ,int);
    void display();
complex operator-();
complex operator++();
complex operator++(int);



};
complex::complex()
{
    int real=img=0;
}
complex::complex(int p,int q)
{
    this->real=p;
    this->img=q;
}
void complex::display()
{
if(img>0)
{
    cout<<real<<"+"<<img<<"i"<<endl;
}
else{
     cout<<real<<img<<"i"<<endl;
}
}

complex complex :: operator-(){
    complex temp;
    temp.real= -this->real ;
    temp.img = -this->img ;
    return temp;
}
complex complex :: operator++(){
    complex temp;
    temp.real= this->real+1 ;
    temp.img = this->img +1;
    return temp;
}
complex complex :: operator++(int){
    complex temp;
    temp.real= this->real+1 ;
    temp.img = this->img +1;
    return temp;
}



int main(){
  complex c1(1,2);
  complex c2(3,4);
  complex c3=-c1;
  complex c4=++c1;
  complex c5=c2++;
  c1.display();
  c2.display();
  c3.display();
  c4.display();
  c5.display();
}