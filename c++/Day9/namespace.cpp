#include<iostream>
namespace data
{
    void display()
    {
        std::cout<<"this is namespace";
    }
}
namespace first
{ 
    int b=20;
    void show(){
    int a=10;
std::cout<<"this is namespace first"<<a;
    }

   
}
int main()
{
     data::display();
    first::show();
   std::cout<<first::b;

}

    