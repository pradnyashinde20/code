#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    int x=sizeof(arr);
    int y=sizeof(*(arr+1));
    int len=x/y;
cout<<"length of array is::"<<len;
}