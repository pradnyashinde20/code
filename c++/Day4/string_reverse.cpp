#include<iostream>
#include<string.h>
using namespace std;
int main(){

    char str[]="shivam";

    int l = strlen(str)-1;
    int n=0;
    while (n<=l)
    {
        int temp = str[n];
        str[n]=str[l];
        str[l]=temp;
        n++;
        l--;
    }
    cout<<str;
}