#include<iostream>
using namespace std;
int main(){
	
	int a[] = {2,3,4,23,12,1,47};
	int max=*(a+0);
	
	for(int i=1; i<=6;i++){
		if(*(a+i)>max){
			max =*(a+i);
		}
			
	}	cout<<max;

int p[2][2];
int i,j;
cout<<"enter the element:";
for(int i=0;i<=1;i++)
{
	for(int j=0;j<=1;j++)
	{
		cin>>p[i][j];
	}
}
cout<<"The array element are :\n";
for(int i=0;i<=1;i++)
{
	for(int j=0;j<=1;j++)
	{
		cout<<p[i][j];
		cout<<"\t";
		
	}
	cout<<"\n";
}

}
