#include<iostream>
using namespace std;
int main(){
	
int a[4][4];
int i,j;
cout<<"enter the element:";
for(int i=0;i<=3;i++)
{
	for(int j=0;j<=3;j++)
	{
		cin>>*(*(a+i)+j);
	}
}
cout<<"The array element are :\n";
for(int i=0;i<=3;i++)
{
	for(int j=0;j<=3;j++)
	{
		cout<<*(*(a+i)+j);
		cout<<"\t";
		
	}
	cout<<"\n";
}

}
