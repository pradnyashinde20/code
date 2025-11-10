#include<iostream>
using namespace std;

class student{
    int rollNo;
    char name[20];
    int marks;
    char dob[20];
    
    public:
    void accept(){
        cin>>rollNo;
        cin>>name;
        cin>>marks;
        cin>>dob;
    }

    void display(){
        cout<<name<<"\t"<<rollNo<<"\t"<<marks<<"\t"<<dob<<endl;
    }
    
};
int main(){
    int n,i;
    cout<<"enter no of student";
    cin>>n;

    student* ptr = new student[n];
    cout<<"accept data of students"<<endl;
    for(int i=0;i<n;i++){
        ptr[i].accept();
    }

    cout<<"display data of students"<<endl;
    for(int i=0;i<n;i++){
        ptr[i].display();
    }
  
    // for(int i =0;i<n;i++){
    //     ptr[i]->marks> ptr[i+1]->marks;
    // }
}
