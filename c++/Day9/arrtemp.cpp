#include<iostream>
using namespace std;
template <class t,int size>
class arr
{
int arr[size];
cout<<"array size is"<<arr;
};
int main()
{
arr<int, 15>t1;
}