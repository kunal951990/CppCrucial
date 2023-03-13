#include <iostream>
#include <memory>
using namespace std;

class Temp
{
    private:
        int i;
    public:
        Temp (int a = 0){i = a;}
        ~Temp (){cout<<"Dest"<<endl;}
        int geti(){return i;}
};

int main()
{
    unique_ptr<Temp> uptr(new Temp(9));
    shared_ptr<Temp> sptr1(new Temp(21));
    cout<<uptr->geti()<<endl;
    cout<<sptr1->geti()<<endl;
    return 0;
}