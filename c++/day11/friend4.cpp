#include<iostream>
using namespace std;
class a
{
int no;
protected:
char name;
public:
 void display(){
    cout<<"name is: "<<"\t";
    cout<<"value is: "<<"\t";
 }
 a(int p, char q );
 friend class f;
};
a::a(int p,char q)
{
no=p;
name=q;
}
class f{

    public:
    void print(a &t)
    {
        cout<<"value of no: "<<t.no;
        cout<<"name is: "<<t.name;
    }
};
int main()
{
    a obj(1,"priya");
    f f1;
    f1.print(obj);
    
}