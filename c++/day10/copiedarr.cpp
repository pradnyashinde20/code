#include<iostream>
using namespace std;
int main()
{
    int n,c;int sum=0,i;
   

    cout<<"how many elementre do you want add in array::\t";
    cin>>n;
     int a[n];
    int b[n];
    cout<<"enter the arr element::\t";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"value of array::\t";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        b[i]=a[i];
         sum=sum+b[i];
        
    }
    cout<<"summation is::\t"<<sum;
    cout<<"values are::\t"<<b[i];
     
     
    }