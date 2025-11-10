#include<iostream>
using namespace std;

int main(){
    int numerator,denominator,result;
    cout<<"enter the value of numerator"<<endl;
    cin>>numerator;
    cout<<"enter the value of denominator"<<endl;
    cin>>denominator;

        try{
            if(denominator==0){
                throw 0;
                return 0;
            }
            else{
                result = numerator/denominator;
                cout<<result;
            }
        }
        catch(float e){
            cout<<"in first catch block"<<endl;
        }
            catch(int e){
                cout<<"denominator should not be zero"<<endl;
            }
            cout<<"end of the program"<<endl;
        
}