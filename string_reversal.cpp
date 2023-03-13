#include <iostream>
using namespace std;

int main()
{
    string name = "Kishor Kunal";

    int z = name.length() -1;
    //for (int i = 0; i< name.length()/2 ; i++) // z is also decreasing thats why no need of half length
    for (int i = 0; i<= z ; i++)
    {
        char a = name[i];
        char b = name[z];
        name[i] = b;
        name[z] = a;
        z--;
    }
    cout<<name<<endl;
    return 0;
}