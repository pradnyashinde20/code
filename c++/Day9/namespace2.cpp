#include<iostream>
using namespace std;

namespace shivam{
    class demo{
        public:
        void display(){
            cout<<"this is a demo class"<<endl; 
        }
    };
}
int main(){
    shivam ::demo d;
    d.display();
}