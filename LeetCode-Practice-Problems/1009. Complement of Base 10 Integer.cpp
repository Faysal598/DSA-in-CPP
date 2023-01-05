#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int bin[32];
    while (n != 0)
    {
        bin[i] = n % 10;
        // cout << bin[i];
        n = n / 10;
        i++;
    }
    return 0;
}