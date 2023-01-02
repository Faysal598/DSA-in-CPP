#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a=4, b=6;

    cout<<"a AND b: "<<(a&b)<<endl;
    cout<<"a OR b: "<<(a|b)<<endl;
    cout<<"NOT a: "<<(~a)<<endl;
    cout<<"a XOR b: "<<(a^b)<<endl;
    cout<<"Left Shift of 75<<2: "<<(75<<2)<<endl;
    cout<<"Right Shift of 75>>2: "<<(75>>2)<<endl;

    return 0;
}