#include<iostream>
using namespace std;

class student{
    char name[30];
    int rollno;
    static char college[20];
    public:
    void getdata();
    void putdata();
};
char student :: college[20]="IET";

void student :: getdata(){
   cout<<"enter name :"<<endl;
   cin>>name;
   cout<<"enter roll no :"<<endl;
   cin>>rollno;
}
   void student :: putdata(){
    cout<<"name is :"<<name<<endl;

    cout<<"roll no is :"<<rollno<<endl;
    cout<<"college name is :"<<college<<endl;
   }

int main(){
    student s[20];
    int n ,i;
    cout<<"enter no of student"<<endl;
    cin>>n;
    for(int i =0;i<n;i++){
        (s+i)->getdata();
    }
    for(int i=0;i<n;i++){
        (s+i)->putdata();
    }
}