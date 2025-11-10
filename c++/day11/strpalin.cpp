#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[]="shivam";
    char str2[20];
    strcpy(str2,str1);
    strrev(str1);
    if(strcmp(str1,str2)){
        cout<<"the string is not palindrome  "<<str2<<endl;
    }else{
        cout<<"string is palindrome  "<<str1<<endl;
    }
       
}