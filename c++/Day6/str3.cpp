#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str1[50];
    char str2[50];
    cout<<"enter string first"<<endl;
    cin>>str1;
    cout<<"enter string second"<<endl;
    cin>>str2;
    strcat(str1,str2);
    cout<<str1;


}