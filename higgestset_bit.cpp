#include <iostream>
using namespace std;

void gethighestsetbit()
{
    int num, i, order = -1;
    cout<<"Enter a number :"<<endl;
    cin>>num;

    for(i = 0 ; i<32 ; i++)
    {
        if((num >> i) & 1)
        {
            order = i;
            cout<<"Order is :"<<order<<endl;
        }
    }
    if(order != -1)
    {
        cout<<order<<endl;
    }
    else
        cout<<"No set bit."<<endl;
}

int main()
{
    gethighestsetbit();
    return 0;
}

