#include<iostream>
using namespace std;

class employee{
    int id;
    public:
    employee();
    employee(int);
    void display();
    virtual int findsal()=0;
};
employee :: employee(){
    cout<<"in default of employee"<<endl;
    
}
employee:: employee(int id){
    id =id;
}