#include <iostream>
using namespace std;

class Singleton{
    private:
    int data;
    static Singleton *instance;
    Singleton(){}
    public:
    static Singleton* createInstance()
    {
        if(instance == NULL)
        {
            instance = new Singleton();
        }
        return instance;
    }
    void setData()
    {
        data = 1;
    }
    void getData()
    {
        cout<<data<<endl;
    }

};

Singleton* Singleton::instance = NULL;

int main()
{
    // Singleton *Object = Singleton::createInstance();
    // Object->setData();
    // Object->getData();
    Singleton::createInstance()->setData();
    Singleton::createInstance()->getData();
    return 0;
}
