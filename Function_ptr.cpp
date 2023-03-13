#include <iostream>
#include <vector>
using namespace std;

void hello(int a){cout<<"Hello  World : "<<a<<endl;}
void printValue(int value){cout<<value<<endl;}

void foreach(vector <int> v, void (*func)(int))
{
    for (int i : v)
        func(i);
}
int main()
/* {
    //hello();
    void (*fptr)(int) = hello;
    //auto fptr = hello;
    fptr(5);
    fptr(10);
    return 0;
} */

{
    vector <int> vint = {1,2,3,4,5,6,7,8,9,10};
    foreach(vint, printValue);
    return 0;
}