#include<iostream>
using namespace std;
int main()
{
    int a[2];
    int sum=0;
    int i=0;
    int n;
    float average;
    cout<<"how many no do you want to find average::";
    cin>>n;
    cout<<"enter the value to add:\t";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"values are:"<<"\t";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        sum=sum+a[i];
    }
    //cout<<"value in array\t"<<*(a+1);
    //sum=sum+a[i];
    cout<<"sum is::\t"<<sum;
    average=sum/n;
    cout<<"avrerage::"<<average;
}