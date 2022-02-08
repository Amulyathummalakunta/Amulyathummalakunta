#include<iostream>
using namespace std;
class A{
int x=20;
public:
virtual void display(){
cout<<x;
}
};
class B:public A{
int y=40;
public:
void display(){
cout<<"Value of y is:"<<y;
}
};
int main(){
A*a;
B b;
a=&b;
a->display();
return 0;
}
