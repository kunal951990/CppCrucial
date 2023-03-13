#include <iostream>
using namespace std;

int getlsb()
{
    int num;
    cout<<"Enter a number :"<<endl;
    cin>>num;


    if(num & 1)
        return 1;
    else
        return 0;
}

int main()
{
    cout<<getlsb()<<endl;;
    return 0;
}

