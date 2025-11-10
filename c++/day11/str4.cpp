#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[50];
    char* ptr = str1;
    int space=0, vowels=0,cnt=0;
    cout<<"enter multi word string"<<endl;
    gets(str1);
    cout<<"display string"<<endl;
    puts(str1);
    while(*ptr!='\0'){
        if(*ptr ==32)
        space++;
        if(*ptr =='a'||*ptr =='e'||*ptr =='i'||*ptr =='o'||*ptr =='u')
        vowels++;
        cnt++;
        ptr++;
    }
    cout<<"the no of spaces are  "<<space<<endl;
        cout<<"the no of words are  "<<space +1<<endl;
            cout<<"the length of string is  "<<cnt<<endl;

}