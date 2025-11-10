#include<iostream>
using namespace std;
class arr
{
    int roll_no;
    char name[10];
    public:
    void accept();
    void display();
    ~arr();
    
};
 void arr::accept()
{
    
    cin>>roll_no;
    cin>>name;

}
void arr:: display(){
    cout<<"rollno is:"<<roll_no;
    cout<<"name is:"<<name;
}
arr::~arr()
{
    cout<<"this is destructor";
}
int main()
{
     int n;
    cout<<"enter no of student";
    cin>>n;
cout<<"accept";
    arr *a=new arr[n];
   
    for(int i=0;i<n;i++)
    {
a[i].accept();

    }
     for(int i=0;i<n;i++)
    {
(a+i)->display();

    }
    
    

}