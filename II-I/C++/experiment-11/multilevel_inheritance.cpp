#include <iostream>
using namespace std;
class A1{
public:
int a;
A1(){
cin>>a;
}
void display1(){
cout<<"a is "<<a<<endl;
}
};
class A2:public A1{
public:
int b;
A2(){
cin>>b;
}
void display2(){
cout<<"b is "<<b<<endl;
}
};
class A3:public A2{
public:
int c;
A3(){
cin>>c;
}
void display3(){
cout<<"c is "<<c<<endl;
}
};
int main(){
        A3 obj;
        obj.display1();
        obj.display2();
        obj.display3();
       return 0;
}
