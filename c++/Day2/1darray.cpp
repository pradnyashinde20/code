#include<iostream>
using namespace std;
int main()
{
	int a[4];
		cout<<"enter the array element:";
	for(int i=0;i<=3;i++)
	{
	
	//	cin>>a[i];
	cin>>*(a+i);
	}
	for(int i=0;i<=3;i++)
	{
		cout<<*(a+i)<<"\t";
	}
}
