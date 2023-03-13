/*#include <iostream>
using namespace std;

int getmsb()
{
    int num;
    cout<<"Enter a number :"<<endl;
    cin>>num;

    int msb = (1 << 31);
    cout<<"msb after shifting 31 bits "<<msb<<endl;


    if(num & msb)
        return 1;
    else
        return 0;
}

int main()
{
    cout<<getmsb()<<endl;;
    return 0;
}
*/

#include <iostream>
using namespace std;
#define BITS sizeof(int) * 8 // Total bits required to represent integer

int main()
{
    int num, msb;

    /* Input number from user */
    cout<<"Enter any number: "<<endl;;
    cin>>num;

    /* Move first bit of 1 to highest order */
    //msb = 1 << (BITS - 1);

    num = num >> 31;

    /* Perform bitwise AND with msb and num */
    if(num & msb)
        printf("MSB of %d is set (1).", num);
    else
        printf("MSB of %d is unset (0).", num);

    return 0;
}
