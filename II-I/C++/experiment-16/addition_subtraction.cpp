#include<iostream>
using namespace std;
class ComplexNum {
   private:
   int real, imag;
   public:
   ComplexNum(int r = 0, int i =0) {
      real = r;
      imag = i;
   }
   ComplexNum operator - (ComplexNum const &obj1) {
      ComplexNum obj2;
      obj2.real = real - obj1.real;
      obj2.imag = imag - obj1.imag;
      return obj2;
   }
   void print() {
      if(imag>=0)
      cout << real << " + i" << imag <<endl;
      else
      cout << real << " + i(" << imag <<")"<<endl;
   }
};
int main() {
   ComplexNum comp1(15, -2), comp2(5, 10);
   cout<<"The two comple numbers are:"<<endl;
   comp1.print();
   comp2.print();
   cout<<"The result of the subtraction is: ";
   ComplexNum comp3 = comp1 - comp2;
   comp3.print();
}
