#include<iostream>
using namespace std;

class complex{
	int real;
	int img;
	public:
		void accept();
		void display();
		void setReal(int);
		int getReal();
		
};
void complex :: accept(){
	cout<<"enter the value of real and img\n";
	cin>>real>>img;
}
void complex :: display(){
	cout<< "the complex number is\t"<<real<<"+"<<img<<"i"<<endl;

}
void complex :: setReal(int r)
{
	real = r;
}
int complex :: getReal(){
	return real;
}

int main(){
	complex c1;
	
	c1.accept();
	c1.display();
	c1.setReal(20);
	cout<<"the real number is "<<c1.getReal()<<endl;

}
