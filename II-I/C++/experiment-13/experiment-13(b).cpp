#include<iostream>
#include<exception>
using namespace std;
int main(){
int a,b;
float c;
cout<<"Enter the numerator and denominator : ";
cin>>a>>b;
try{
if(b==0){
throw(b);
}
c=a/b;
cout<<"Result is : "<<c<<endl;
}
catch(int i){
cout<<"exception is catch"<<endl;
}
catch(...){
cout<<"denominator cannot be 0!!"<<endl;
}
return 0;
}
