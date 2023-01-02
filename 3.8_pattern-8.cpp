#include <iostream>
using namespace std;
int main()
{
    int n, row = 1, count = 0;
    cin >> n;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            // cout << char('A' + row - 1) << " "; // e.g., 1
            /*cout << char('A' + count) << " "; // e.g. 2
            count++;*/
            cout << char('A' + row + col - 2) << " "; // e.g., 3

            col++;
        }

        cout << endl;
        row++;
    }
    return 0;
}
