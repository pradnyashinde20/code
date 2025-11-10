#include<iostream>
using namespace std;
class a{
    public:
    a()
    {
        cout<<"this class a construcotr"<<endl;
    }
    void display()
    {
        cout<<"this is display method of a"<<endl;
    }
};
class b: virtual public a{
    public:
    b()
    {
         cout<<"this class b construcotr"<<endl;
    }
    void display()
    {
        cout<<"this is display method of b"<<endl;
    }
};
class c:virtual public a{
    public:
    c()
    {
         cout<<"this class c construcotr"<<endl;
    }
};
class d:public b,public c{
    public:
    void display()
    {
        a:: display();
        b::display();
        cout<<"this is display method d"<<endl;
    }
    d()
    {
    
     cout<<"this class d construcotr"<<endl;

    }

}; 
int main()
{
    d *ptr=new d();
    //d obj;
ptr->display();
}