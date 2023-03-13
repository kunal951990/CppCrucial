#include <iostream>
using namespace std;

int main()
{
    int number1 = 135;
    int number2 = 125;
    int j =  number1 >> 31;
    int k =  number2 >> 3;

        int l =  1 << 31;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<l<<endl;
    return 0;
}