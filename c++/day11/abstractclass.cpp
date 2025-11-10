#include<iostream>
using namespace std;
class shape{
    public:
     virtual void draw()=0;
};
class circle: public shape{
    public:
 void draw() override
{
cout<<"this is draw method";
}
};
int main()
{
    shape *s=new circle();
    s->draw();
    delete s;

}