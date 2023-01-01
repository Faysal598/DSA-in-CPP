#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            // cout<<"* "; //e.g., 1
            // cout<<i; //e.g., 2
            // cout<<j; // e.g., 3
            cout << n - j + 1 << " "; // e.g, 4
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}