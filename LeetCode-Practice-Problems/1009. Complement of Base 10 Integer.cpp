#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n, mask = 0, ans;

    if (n == 0)
        return 1;
        
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    ans = (~n) & mask;

    cout << ans << endl;

    return 0;
}
