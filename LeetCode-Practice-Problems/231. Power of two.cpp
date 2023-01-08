#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    bool x = true;
    cin >> n;

    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);

        if (ans == n)
            x;
    }
    if(x) cout<<"True";
    else cout << "False";
    return 0;
}