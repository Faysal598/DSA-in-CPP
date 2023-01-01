#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            // cout << row + col - 1 << " "; // e.g., 1
            cout << char('A' + row + col - 2) << " "; // e.g., 2
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}