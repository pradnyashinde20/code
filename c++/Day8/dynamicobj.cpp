#include<iostream>
using namespace std;
class string1{
    int len;
    char* name;
    public :
    string1();
     void display();
    string1(int len);
    string1(char*);
};
string1::string1()
{
len=1;
name=new char[len];
cout<<*name;

};
string1::string1(int len)
{
this->len=len;
};
void string1::display(){
    if(len>1)
    {
        cout<<"length is:/t"<<len<<"/t"<<"character value is::"<<name;
    }
    else{
        cout<<"length is:/t"<<len<<"/t"<<"character value is::"<<*name;
    }
};
int main()
{
    string1 s;
    s.display();
    string1(4);
}