#include <iostream>
using namespace std;

void togglenthbit()
{
    int num, pos;
    cout<<"Enter a number :"<<endl;
    cin>>num;

    cout<<"Enter position :"<<endl;
    cin>>pos;

    pos = (1 << pos);

    num = num ^ pos;
    
    cout<<"New number is : "<<num<<endl;
}

int main()
{
    togglenthbit();
    return 0;
}

