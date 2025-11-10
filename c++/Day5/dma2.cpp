#include<iostream>
using namespace std;

class Test{
    public: 
    char name[10];
    void acceptname();
    void getname();

};
void Test :: acceptname(){
    cin>>name;
}
 void Test :: getname(){
    cout<<name<<endl;
 }
 int main(){
  

 }