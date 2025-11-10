//constant memeber function defined outside the class

#include<iostream>
using namespace std;
class ABC{
    int a ;
    public:
    void setdata(int);
    int getdata() const;
};
void ABC :: setdata(int x){
    this->a=x;
}
int ABC :: getdata() const{
    return a;
}
int main(){
    ABC obj;
    obj.setdata(12);
    cout<<obj.getdata();
}

// constant member function can be access by non constant object
// #include<iostream>
// using namespace std;
// class ABC{
//     int a;
//     public:
//     ABC(int x=10 ){
//         a=x;
//     }
//     int getvalue() const{
//         return a;
//     }
// };
// int main(){
//     ABC obj(20);
//    cout<< obj.getvalue();
// }

// non constant funcion cannot be accessed by constant object

// #include<iostream>
// using namespace std;
// class ABC{
//     int a;+
//     public:
//     ABC(int x=10 ){
//         a=x;
//     }
//     int getvalue() {
//         return a;
//     }
// };
// int main(){
//    const ABC obj(20);
//    cout<< obj.getvalue();
// }