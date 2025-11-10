#include<iostream>
using namespace std;
class a{
    int no;
    public:
    void setValue(int);
    int getValue();
};
void a::setValue(int s)
{
    no=s;
    cout<<"value of no:\t"<<no;
}
int a::getValue()
{
return no;
}
class b:public a{
    int c=10;
    public:
    void display(){
        cout<<"value of c\t"<<c;
    }
};
class c:protected b{
    int c=50;
    public :
    void display()
    {
        cout<<"this is derived class\t"<<c;
    }
};
int main()
{
//b obj;
c obj;
//obj.setValue(20);
//obj.getValue();
obj.display();
obj.display();


}