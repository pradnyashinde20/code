#include<iostream>
using namespace std;
class a{
    char no,c;
    public :
     void setvalue(){
        
        cout<<"char value is:"<<no;
       
        
    }
    char setvalue(char){
        
        cout<<"char value is:"<<no;
        no=c;
        cout<<"set value is:"<<no;
        
    }
      
       
    char getvalue()
    {
        cout<<"enter the character:\t";
        cin>>c;
        no=c;
        return no;
    }
};
int main()
{
    a *p=new a;
   
    p->getvalue();
    p->setvalue();
     p->setvalue('a');

}