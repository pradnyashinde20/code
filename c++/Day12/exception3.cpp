#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age::"<<endl;
    cin>>age;
    try{
    if(age<0||age>100)
    {
        throw (age);
    }
}
catch(int p)
{
    cout<<"access denied you must enter the valid age";
}
}