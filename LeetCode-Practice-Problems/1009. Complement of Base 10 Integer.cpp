#include <iostream>
#include <math.h>
using namespace std;

int bitwiseComplement(int n)
{
    if (n == 0)
        return 1;

    int ans = 0, i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        if (bit == 1)
        {
            bit = 0;
        }
        else if (bit == 0)
        {
            bit = 1;
        }

        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }

    int sum = 0, j = 0;
    while (ans != 0)
    {
        int digit = ans % 10;
        if (digit == 1)
        {
            sum = sum + pow(2, j);
        }

        ans = ans / 10;
        j++;
    }

    return sum;
}

int main()
{
    int n, result;
    cin >> n;

    cout << bitwiseComplement(n) << endl;

    return 0;
}