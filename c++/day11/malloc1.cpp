#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int n;
     cout<<"enter the no of elements:"<<endl;
    cin>>n;
    ptr=(int*)malloc(n* sizeof(int));
   
    for(int i=0;i<n;i++)
    {
       cin>>ptr[i];
    }
    cout<<"display elements"<<endl;
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<"  ";

    } free(ptr);
}