#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, ans = 0, i = 0;
    cin >> n;

    while (n != 0)
    {
        // AND operation of the last bit with 1
        int bit = n & 1;
        // formula for storing bits;
        ans = (bit * pow(10, i)) + ans;
        // right shift the bits;
        n = n >> 1;

        i++;
    }
    cout << ans;

    return 0;
}