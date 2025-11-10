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
int main()
{
//b obj;
a obj;
obj.setValue(20);
obj.getValue();
//obj.display();

}