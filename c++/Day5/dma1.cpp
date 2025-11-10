#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number of students"<<endl;
    cin>>num;

    float* gpa = new float[num];

    cout<<" enter gpa of students"<<endl;
    for(int i =0;i<num;i++){
        cin>>*(gpa+i);
        }
    
        cout<<"display the gpa of students"<<endl;
        for(int i=0;i<num;i++){
            cout<<*(gpa+i)<<"\t";
        }
        delete [] gpa;
}