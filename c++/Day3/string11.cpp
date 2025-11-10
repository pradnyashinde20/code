#include<iostream>
using namespace std;
void user_strcpy(char*,char*);
int main(){
    char c1[20];
    char c2[20];
    cout<<"enter first string\n";
    cin>>c1;
    user_strcpy(c2,c1);
    cout<<"copied string is\t"<<c2;
}
void user_strcpy( char* p, char* q){
    while(*q!='\0'){
        *p = *q;
        q++;
        p++;

    }
    *p ='\0';
}