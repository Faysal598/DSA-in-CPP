#include<iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cin>>n;

    while(row<=n)
    {
        int col = 1, value = row;
        while(col<=row)
        {
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}