#include<iostream>
using namespace std;

class Complex{
	int real;
	int img;
//	int & real_new=real;
//	int & img_new=img;
	public:
		Complex();
		Complex(int,int);
		void display() const;
		void setReal(int);
		int getReal() const;
		
};
 void Complex :: setReal(int r){
 	real =r;
 }
 int Complex :: getReal() const{
 	return real;
 }
 Complex :: Complex(){
 	cout<<"in default constructor\n";
 	real =1;
 	img =2;
 }
 Complex :: Complex(int a, int b){
 	cout<< "para constructor\n";
 	real = a;
 	img = b;
	
 }
 void Complex :: display()const{
 	cout<<"complex number is : "<<real<<"+"<<img<<"i"<<endl;
 
 }
 int main(){
 	const Complex c1(5,6);
 	cout<<"real Part "<<c1.getReal();
 	
 	Complex c2;
	Complex(3,4);
 	cout<<"real Part "<<c2.getReal();
 	
 		
 }
