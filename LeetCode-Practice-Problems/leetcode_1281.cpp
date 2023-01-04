#include <iostream>
using namespace std;
int main()
{
    int n, prod = 1, sum = 0;

    cin >> n;

    while (n != 0)
    {

        int digit = n % 10;

        prod *= digit;
        sum += digit;

        n = n / 10;
    }

    int result = prod - sum;
    cout << result;

    return 0;
}