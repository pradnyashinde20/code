#include<iostream>
using namespace std;
#include<string.h>

// case 1: non constant pointer points to constant integer
// int main(){
//     int a =10;
//     const int *ptr = &a;
//     cout<<*ptr;
//     a=12;
//     cout<<*ptr<<" "<<a;

// }



// case 2 : constant pointer points to non constant integer
// int main(){
//     int a =10;
//      int * const ptr =&a;
//      cout<<*ptr<<endl;;
//      *ptr=5;
//      cout<<*ptr;
//}


// case 3 : constant pointer points to constant integer

// int main(){
//     int a =10;
//     const int * const ptr =&a;
//      cout<<*ptr<<endl;;
//     a=7;
//     cout<<*ptr;
// }