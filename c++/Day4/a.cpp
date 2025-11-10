#include<iostream>
using namespace std;
class ABC{
    public:
      int a;
      ABC(){
        a=10;
      }

};
int main(){
    const ABC obj;
    cout<<obj.a<<endl;
    int a =20;
    cout<<obj.a;
}