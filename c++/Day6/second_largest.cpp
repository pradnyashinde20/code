#include<iostream>
using namespace std;
int main(){
    int arr[]={55,88,23,87,45,90,67};
    int lar=arr[0];
    int seclar=arr[0];
    for(int i=0;i<7;i++){
        if(lar<arr[i]){
            lar = arr[i];
        }
   
    }
    cout<<"First Largest "<<lar<<endl;
     for(int i=0;i<7;i++){
         if(lar==arr[i])
    {
        continue;
    }
    if(seclar<arr[i])
    {
        seclar=arr[i];
    }
}cout<<"second largest "<<seclar<<endl;
    
}