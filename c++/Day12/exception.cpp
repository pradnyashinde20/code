#include<iostream>
using namespace std;
int main()
{
    int x=-3;
    try{
    if(x==0)
    {
        throw x;
    }
    else if(x>0)
    {
throw 'x';
    }
    // else if(x<0){
    //     throw x;
   // }
    else{
        throw "exception occure";
    }
    
}
catch(int i)
{
    cout<<"int exception ::"<<i<<endl;
}
catch(char c)
{
    cout<<"character exception::"<<c<<endl;
}

catch(char* str)
{
    cout<<"string exception"<<str<<endl;
}

}