#include <iostream>
using namespace std;

int getnthbit()
{
    int num, pos, bitStatus;
    cout<<"Enter a number :"<<endl;
    cin>>num;

    cout<<"Enter position :"<<endl;
    cin>>pos;

    num = num >> pos;

    if(num & 1)
        return 1;
    else
        return 0;
}

int main()
{
    cout<<getnthbit()<<endl;
    return 0;
}

