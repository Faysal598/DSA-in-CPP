#include<iostream>
using namespace std;
int main()
{
    int n, row = 1, count = 0;
    cin>>n;

    while(row<=n)
    {
        int col = 1;
        while(col<=n)
        {
            // cout<<char('A' + row - 1)<<" "; // e.g., 1
            // cout<<char('A' + col - 1)<<" "; // e.g., 2
            cout<<char('A' + count)<<" "; // e.g.,3
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}