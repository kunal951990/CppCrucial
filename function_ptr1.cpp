#include <iostream>
#include<memory>
using namespace std;

void printname1()
{
    cout<<"Kunal"<<endl;
}

void printname2()
{
    cout<<"Kishor"<<endl;
}

void printname3()
{
    cout<<"Ram"<<endl;
}

void printname4()
{
    cout<<"Rajesh"<<endl;
}

int main()
{
    array< void(*)() , 4> fptr = {printname1, printname2, printname3, printname4};
    for (int i = 0; i < 4; i++)
        fptr[i]();
    return 0;
}