#include<iostream>
using namespace std;

class test{
    private:
    static int stn1;
    static int stn2;
    public:
    test(){
        stn1++;
        cout<<"constructor is called "<<stn1<<endl;
    }
    ~test(){
        cout<<"destructor is called "<<++stn2<<endl;
    }
    static int getstn1(){
        return stn1;
    }
};

int test :: stn1=0;
int test :: stn2=0;
int main(){
    test t;
    cout<<&t<<endl;
    test t1;
    cout<<&t1<<endl;
    cout<<"no of object created... "<<test::getstn1()<<endl;;
}