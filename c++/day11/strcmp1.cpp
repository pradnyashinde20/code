#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[]="shivam";
    char str2[]="shivam";
    int x = strcmp(str1,str2);
    if(x==1){
        cout<<"string1 is greater than string2 "<<x<<endl;
    }
    if(x==0){
        cout<<"string 1 is equal to string2 "<< x<<endl;
    }
    if(x==-1){
        cout<<"string2 is greater than string 1 "<<x<<endl;
    }

}
