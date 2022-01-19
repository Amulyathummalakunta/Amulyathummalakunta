#include <iostream>
#include <string>
using namespace std;

struct student{
    string name;
    int roll_no;
    string dept;
    int marks;
};

int main()
{
    struct student stud;
    
    cout<<"Enter the student Information"<<endl;
    cout<<"Name of the student:";
    cin>>stud.name;
    cout<<"student roll_no : ";
    cin>>stud.roll_no;
    cout<<"Department: ";
    cin>>stud.dept;
    cout<<"marks: ";
    cin>>stud.marks;

    cout<<"Student Information: "<<endl;
    cout<<"Name of the student: "<<stud.name<<endl;
    cout<<"Roll no: "<<stud.roll_no<<endl;
    cout<<"Name of the Department: "<<stud.dept<<endl;
    cout<<"marks: "<<stud.marks;
    
    return 0;
}

