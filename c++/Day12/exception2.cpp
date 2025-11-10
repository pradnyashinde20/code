#include<iostream>
using namespace std;
int main(){
    int numerator,denominator, arr[4]={1,2,3,4};
    int index;
    cout<<"enter index"<<endl;
    cin>>index;
    try{
        if(index>=4){
            throw "error : array index out of bound!!";
        }
        cout<<"enter numerator"<<endl;
        cin>>numerator;
        cout<<"enter denominator"<<endl;
        cin>>denominator;

        if(denominator==0){
            throw 0;
        }
        arr[index]= numerator/denominator;
        cout<<arr[index]<<endl;
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }
    catch(int num){
        cout<< "error : cannot divide by "<<num<<endl;
    }
    catch(...){
        cout<<"unexpected exception"<<endl;
    }
    return 0;
}