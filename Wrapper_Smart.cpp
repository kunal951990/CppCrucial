#include <iostream>
using namespace std;

class MyInt {
    private:
        int *data;
    public:
        MyInt(int *a = nullptr)
        {
            data = a;
        }
        ~MyInt()
        {
            cout<<"Delete is called."<<endl;
            delete data;
        }
        int& operator *()
        {
            return *data;
        }
};

int main()
{
    int *number = new int(10);
    MyInt myint(number);
    cout<<*myint<<endl;
    return 0;
}