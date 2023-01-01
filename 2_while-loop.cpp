#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    int sum = 0;
    cin >> n;

    while (i <= n)
    {
        // cout<<i<<" ";

        sum += i;
        i++;
    }
    cout <<"Sum of loop "<< sum;
    return 0;
}