#include <iostream>
#include <array>
using namespace std;

class Student{
    public:
        string st_name;
        int rollno;
        int age;
    Student()
    {
    }

    void setdata()
    {
        cout<<"Enter name of Student :"<<endl;
        cin>>st_name; 
        cout<<"Enter roll of Student :"<<endl;
        cin>>rollno; 
        cout<<"Enter age of Student :"<<endl;
        cin>>age; 
    }

    void getdata()
    {
        cout<<"Name of Student :" << st_name <<endl; 
        cout<<"Roll of Student :" << rollno <<endl;
        cout<<"Age of Student : "<< age <<endl; 
    }
};

int main()
{
    int n = 0;
    //Student s1, s2, s3;
    array<Student,10> array;
    //array<Student, 3> database;

    cout << "Number of Students you want to enter : "<<endl;
    cin>> n;

    for(int i = 0; i< n; i++)
        array[i].setdata();

    for(int i = 0; i< n; i++)
        array[i].getdata();

    return 0;
}