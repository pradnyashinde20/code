//Note: Objects are destroyed in the reverse order of their creation. 
#include<iostream>
using namespace std;
static int count =0;
class test{
    public:
    test(){
        count++;
        cout<<"object is created : " <<count<<endl;
    }
    ~test(){
        cout<<"object is destroyed : "<<count<<endl;
        count--;
    }
};
int main(){
    test t1;
    cout<<&t1<<endl;
    test t2;
    cout<<&t2<<endl;
    test t3;
    cout<<&t3<<endl;

}