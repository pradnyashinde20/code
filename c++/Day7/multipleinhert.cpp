#include<iostream>
using namespace std;
class a{
   public:
    a(){
        cout<<"class a constructor is called"<<endl;
    }
    public:
void display();
};
void a::display()
{
cout<<"value";
}
class b{
  public:  
    b()
    {
cout<<"b constructor is called"<<endl;
    }
};
class c: private b,public a{
    public:
    c()
    {
        cout<<"constructor c is a called";
    }
};
int main()
{
    c d;
    d.display();
    return 0;

}
