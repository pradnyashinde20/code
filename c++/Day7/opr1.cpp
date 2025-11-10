#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
    complex();
    complex(int ,int);
    void display();
complex operator+(complex &);

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

complex complex :: operator+(complex & newc2){
    complex temp;
    temp.real=this->real + newc2.real;
    temp.img = this->img + newc2.img;
    return temp;
}


int main(){
  complex c1(1,2);
  complex c2(3,4);
  complex c3=c1+c2;
  c1.display();
  c2.display();
  c3.display();
}