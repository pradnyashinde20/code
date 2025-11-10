// #include<iostream>
// using namespace std;
// class A {
//     int a,b;
//     public :
//     void show(){
//         a=20;
//         b=50;
//         cout<<" this address\t"<<this<<endl;
//         cout<<this->a<<endl;
//         cout<<this->b<<endl;

//     }
// };
// int main(){
//     A obj;
//     cout<<"addresss of object\t"<<&obj<<endl;
//     obj.show();
// }


// This pointer is not passed to the static function.therefore static mem fun cannot access non static data member.
#include<iostream>
using namespace std;
class A{
    int dd,mm,yy;
    static int cnt;
    public:
    void show();
    void accept(int, int, int);
    static void getcnt(){
        // cout<<this->cnt;
        // cout<<this;
        // cout<<mm;
        cout<<cnt<<endl;
    }
};
void A :: accept(int a, int b, int c){
    this->dd=a;
    this->mm=b;
    this->yy=c;
}
void A :: show(){
    cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int main(){
    A obj;
    obj.accept(10,4,2003);
    obj.show();
}