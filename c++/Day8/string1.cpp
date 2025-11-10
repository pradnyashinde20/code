#include<iostream>
#include<string.h>
using namespace std;
class string1{
    int len;
    char * ptr;
    public:
        string1();
        string1(char*);
        void display();
        string1(char,int);
        string1(int);
        ~string1(){
            cout<<"destructor is called"<<endl;
            if(ptr){
                cout<<"in if\n"<<endl;
                delete [] ptr;
                ptr = NULL;
            }
        }
    
};
void string1 :: display(){
    cout<<"length is "<<len<<endl;
    cout<<"string is "<<*ptr<<endl;
}
string1 :: string1(){
    len =1;
    ptr = new char(len);
    *ptr = 's';

}
string1 :: string1(char * s){
    len =strlen(s);
    ptr = new char [len+1];
    strcpy(ptr,s);

}
string1 :: string1(char c, int len){
    int i;
    this->len=len;
   ptr = new char [len+1];
   for(i=0;i<len;i++){
    ptr[i]=c;
   }
   ptr[len]='\0';
}
string1 :: string1(int l){
    len =l;
    ptr = new char[len+1];
    cout<<"enter string"<<endl;
    cin>>ptr;
}
int main(){
    string1 s1;
	s1.display();
	string1 s2("rahul");
	s2.display();
	string1 s3('*',80);
	s3.display();
	string1 s4(4);
	s4.display();
    s1.~string1();
    s2.~string1();
    s3.~string1();
    s4.~string1();
}