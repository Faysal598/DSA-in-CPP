#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Capital Letter\n";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Small Letter\n";
    }
    else if (ch >= '0' && ch <= '9')
        cout << "Numeric\n";

    return 0;
}